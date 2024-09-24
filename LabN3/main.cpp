#include <iostream>
#include "IntList.h"

using namespace std;

int main(){

    cout<<"Using data structure lists\n";
    IntList test;
    
    test.addNodeToHead(10);
    test.addNodeToHead(11);
    test.addNodeToTail(99);
    test.print();
    cout<<"List size is: "<< test.getSize()<<"\n";
     
     return 0;
}