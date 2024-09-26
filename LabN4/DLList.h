#ifndef DLLIST_H
#define DLLIST_H

#include "Node.h"

class DLList {

private:
    int size;
    Node* head;
    Node* tail;

public:
    // Constructor
    DLList();

    // Destructor
    ~DLList();

    // List operations
    void addNodeToHead(int element);
    void addNodeToTail(int element);
    void deleteNodeHead();
    void deleteNodeTail();
    void printForward();
    void printBackward();
    bool isEmpty();
    int getSize();
};

#endif 
