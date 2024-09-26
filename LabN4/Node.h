#ifndef NODE_H
#define NODE_H

class Node {

private:
    int element;
    Node* prev;
    Node* next;

public:
    // Constructor
    Node(int elem);

    // Getters
    int getElement();
    Node* getPrev();
    Node* getNext();

    // Setters
    void setElement(int elem);
    void setPrev(Node* prevNode);
    void setNext(Node* nextNode);
};

#endif // NODE_H

