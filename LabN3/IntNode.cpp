#include <iostream>
#include "IntNode.h"
using namespace std;

IntNode::IntNode():
    next(nullptr){
}

IntNode::IntNode(int value): 
    element(value), next(nullptr) {
}

int IntNode::getElement(){
    return element;
}

IntNode* IntNode::getNext(){
    return next;
}

void IntNode::setElement(int value){
    element = value;
}

void IntNode::setNext(IntNode* reference){
   next = reference;
}