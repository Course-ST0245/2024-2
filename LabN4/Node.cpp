#include "Node.h"

// Constructor
Node::Node(int elem): element(elem), prev(nullptr), next(nullptr) {}

// Getters
int Node::getElement(){
    return element;
}

Node* Node::getPrev() {
    return prev;
}

Node* Node::getNext() {
    return next;
}

// Setters
void Node::setElement(int elem) {
    element = elem;
}

void Node::setPrev(Node* prevNode) {
    prev = prevNode;
}

void Node::setNext(Node* nextNode) {
    next = nextNode;
}
