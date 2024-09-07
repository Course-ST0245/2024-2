#include <iostream>
#include "ArrayInteger.h"

using namespace std;


int main(){

    ArrayInteger test;

    cout<< "Array has been initialized successfully: \n";
    cout<< "The size of the array 'test' is: " << test.getSize() <<"\n";

    test.addElement(0);
    test.addElement(5);
    test.addElement(3);
    test.addElement(1);
    test.addElement(4);
    test.addElement(2);
    test.insertElementAt(99,2);
    test.print();
    test.insertionSort();
    test.print();

    return 0;
}