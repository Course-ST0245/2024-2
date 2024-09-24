#include <iostream>
#include "IntList.h"

using namespace std;

IntList::IntList():
    head(nullptr), tail(nullptr), size(0){};

IntList::~IntList(){
    IntNode *current = head;

    while (current != nullptr){
        IntNode *nextNode = current->getNext(); 
        delete current;                     
        current = nextNode;                  
    }
    head = nullptr;
    tail = nullptr;
    size = 0;
}   

void IntList::addNodeToHead(int element){

    IntNode* node = new IntNode();

    if (head == nullptr) {  
        node->setElement(element);
        head = tail = node;
    } else {
        node->setElement(element);
        node->setNext(head);
        head = node;
    }
    size = size + 1;     
}

void IntList::addNodeToTail(int element){

    IntNode* node = new IntNode();

    if (tail == nullptr) { 
        node->setElement(element);    
        head = tail = node;
    } else {
        node->setElement(element);        
        tail->setNext(node); 
        tail = node;      
    }
    size = size + 1;    

}

void IntList::deleteNodeHead(){

    if (head == nullptr){
        cout << "List is empty :)" << endl;
        return;
    }

    IntNode* oldHead = head;
    head = oldHead->getNext();
    delete oldHead;

    size = size - 1;
}

void IntList::deleteNodeTail(){

    if (head == nullptr) {
        cout << "List is empty :)" << endl;
        return;
    }
    if (head == tail) {
        delete head;
        head = tail = nullptr;
    } 
    else {
        IntNode* current = head;
        while (current->getNext() != tail) {
            current = current->getNext();
        }
        delete tail;
        tail = current;
        tail->setNext(nullptr);
    }

    size = size - 1;

}

int IntList::getSize(){
    return size;
}

void IntList::print(){
    IntNode* current;
    current = head;

    while(current != nullptr){
        cout<<"Element equal to:"<< current->getElement()<<"\n";
        current = current->getNext();
    }
}

bool IntList::searchElement(int element) {
    
    IntNode* current = head;

    while (current != nullptr) {
        if (current->getElement() == element) {
            return true; // Element found
        }
        current = current->getNext();
    }
    
    return false; // Element not found
}

