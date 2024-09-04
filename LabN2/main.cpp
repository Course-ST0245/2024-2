#include <iostream>
#include "ArrayInteger.h"

using namespace std;


int main(){

    ArrayInteger test;
    ArrayInteger myArray(10);

    cout<< "Array has been initialized successfully: \n";
    cout<< "The size of the array 'test' is: " << test.getSize() <<"\n";
    cout<< "The size of the array 'myArray' is: " << myArray.getSize() <<"\n";

    myArray.print();

    return 0;
}