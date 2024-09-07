#include <iostream>
#include "ArrayInteger.h"

using namespace std;

ArrayInteger::ArrayInteger(): 
    size(0), array(nullptr){         
}

ArrayInteger::ArrayInteger(int size):
    size(size){

    if (size > 0) {
        array = new int[size];  
    } else {
        array = nullptr;
        size = 0;
    }
}

ArrayInteger::~ArrayInteger(){
    delete[] array;
}

int ArrayInteger::getSize() {
    return size;
}

void ArrayInteger::addElement(int element) {
    
    int* newArray;
    newArray = new int[size + 1];
    element = element;
    
    for (int i = 0; i < size; ++i){
        newArray[i] = array[i];
    }

    newArray[size] = element;
    delete[] array;

    size = size + 1;
    array = newArray;
}

int ArrayInteger::getElementAt(int position) {
    
    return array[position];
}

void ArrayInteger::insertElementAt(int element, int position){
    
    int* newArray;
    newArray = new int[size + 1];

    for (int i = 0; i < position; ++i){
        newArray[i] = array[i];
    }

    newArray[position] = element;

    for (int i = position; i < size; ++i){
        newArray[i + 1] = array[i];
    }

    if (array!= nullptr){
        delete[] array;
    }

    size = size + 1;
    array = newArray;
}

void ArrayInteger::print(){

    for(int i = 0; i < size; ++i){
        cout<<"Element at postion "<< i << " is: "<< array[i]<<"\n";
    }
    cout << "The size of the array is: "<< getSize()<<"\n";
}

void ArrayInteger::insertionSort(){
    int key;
    int j = 0;

    for(int i = 1; i < size; ++i){
        key = array[i];
        j = i - 1;
        while(j >= 0 && array[j] > key){
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}





