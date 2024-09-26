#include <iostream>
#include "DLList.h"

using namespace std;

// Constructor
DLList::DLList() : head(nullptr), tail(nullptr), size(0) {}

// Destructor
DLList::~DLList() {

    Node* current = head;

    while (current != nullptr) {
        Node* nextNode = current->getNext();
        delete current;
        current = nextNode;
    }

    head = nullptr;
    tail = nullptr;
    size = 0;
}

// Check if the list is empty
bool DLList::isEmpty() {
    return head == nullptr;
}

// Insert element at the front of the list
void DLList::addNodeToHead(int element) {

    Node* newNode = new Node(element);

    if (isEmpty()) {
        head = tail = newNode;
    } else {
        newNode->setNext(head);
        head->setPrev(newNode);
        head = newNode;
    }
    size++;
}

// Insert element at the back of the list
void DLList::addNodeToTail(int element) {

    Node* newNode = new Node(element);
    if (isEmpty()) {
        head = tail = newNode;
    } else {
        newNode->setPrev(tail);
        tail->setNext(newNode);
        tail = newNode;
    }
    size++;
}

// Delete element from the front of the list
void DLList::deleteNodeHead() {

    if (!isEmpty()) {

        Node* temp = head;

        if (head == tail) {
            head = tail = nullptr;
        } else {
            head = head->getNext();
            head->setPrev(nullptr);
        }
        delete temp;
    }
    size--;
}

// Delete element from the back of the list
void DLList::deleteNodeTail() {

    if (!isEmpty()) {
        Node* temp = tail;

        if (head == tail) {
            head = tail = nullptr;
        } else {
            tail = tail->getPrev();
            tail->setNext(nullptr);
        }
        delete temp;
    }
    
    size--;
}

// Display list from head to tail
void DLList::printForward() {

    Node* current = head;
    while (current != nullptr) {
        cout << current->getElement() << " ";
        current = current->getNext();
    }
    cout << endl;
}

// Display list from tail to head
void DLList::printBackward() {

    Node* current = tail;
    while (current != nullptr) {
        cout << current->getElement() << " ";
        current = current->getPrev();
    }
    cout << endl;
}

int DLList::getSize(){
    return size;
}
