#ifndef INTLIST_H
#define INTLIST_H

#include "IntNode.h"

class IntList{
    private:        
        int size;
        IntNode* head;
        IntNode* tail;      
    public:
        IntList();
        ~IntList();
        void addNodeToHead(int element);
        void addNodeToTail(int element);
        void deleteNodeHead();
        void deleteNodeTail();        
        int getSize();
        void print();
        bool searchElement(int element);      
};

#endif