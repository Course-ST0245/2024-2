#ifndef INTNODE_H
#define INTNODE_H

class IntNode{
    private:
        int element;
        IntNode* next; 
    public:                   
        IntNode();
        IntNode(int value);
        void setElement(int value);
        void setNext(IntNode* next);          
        int getElement();
        IntNode* getNext();
};

#endif

