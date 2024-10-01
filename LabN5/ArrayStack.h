#ifndef ARRAY_STACK_H
#define ARRAY_STACK_H

#include <stdexcept>
#include <iostream>

// Exception classes
class StackEmpty : public std::runtime_error {

    public:
        StackEmpty(const std::string& err) : std::runtime_error(err) {}
};

class StackFull : public std::runtime_error {
    public:
        StackFull(const std::string& err) : std::runtime_error(err) {}
};

template <typename E>

class ArrayStack {
    enum { DEF_CAPACITY = 100 };    
    public:
        // Default constructor
        ArrayStack(int cap = DEF_CAPACITY);

        // Destructor
        ~ArrayStack();

        // Stack ADT methods
        int size() const;
        bool isEmpty() const;
        const E& top() const;
        void push(const E& e);
        void pop();

    private:
        E* S;                         // Array of stack elements
        int capacity;                 // Stack capacity
        int t;                        // Index of the top of the stack
};

#endif // ARRAY_STACK_H
