#include "ArrayStack.h"
#include <string>


// Constructor: Initialize stack with given capacity
template <typename E>
ArrayStack<E>::ArrayStack(int cap)
    : S(new E[cap]), capacity(cap), t(-1) { }  // Initialize t to -1 (empty stack)

// Destructor: Release dynamically allocated memory
template <typename E>
ArrayStack<E>::~ArrayStack() {
    delete[] S;  // Free the array memory
}

// Return the number of elements in the stack
template <typename E>
int ArrayStack<E>::size() const {
    return (t + 1);
}

// Return true if the stack is empty
template <typename E>
bool ArrayStack<E>::isEmpty() const {
    return (t < 0);
}

// Return the top element of the stack, throw exception if empty
template <typename E>
const E& ArrayStack<E>::top() const {
    if (isEmpty()) throw StackEmpty("Top of empty stack");
    return S[t];
}

// Push an element onto the stack, throw exception if full
template <typename E>
void ArrayStack<E>::push(const E& e) {
    if (size() == capacity) throw StackFull("Push to full stack");
    S[++t] = e;  // Increment t and insert element
}

// Pop an element from the stack, throw exception if empty
template <typename E>
void ArrayStack<E>::pop() {
    if (isEmpty()) throw StackEmpty("Pop from empty stack");
    --t;  // Decrement t to remove the top element
}

// Explicit instantiation for common types
template class ArrayStack<int>;
template class ArrayStack<double>;
template class ArrayStack<std::string>;
