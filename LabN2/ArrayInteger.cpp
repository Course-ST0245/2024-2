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

void ArrayInteger::print(){

    for(int i = 0; i < size; ++i){
        cout<<"Element at postion "<< i << " is: "<< array[i]<<"\n";
    }
}






