#include <iostream>
#include "DLList.h"

using namespace std;


int main() {
    DLList list;

    // Insert elements
    list.addNodeToHead(10);
    list.addNodeToHead(20);
    list.addNodeToTail(30);
    list.addNodeToTail(40);

    // Display list forward and backward
    std::cout << "List (forward): ";
    list.printForward();

    std::cout << "List (backward): ";
    list.printBackward();

    cout << "The size of the is: " << list.getSize() << "\n";

    // Delete elements from front and back
    list.deleteNodeHead();
    list.deleteNodeTail();

    // Display list again
    cout << "List after deletion (forward): ";
    list.printForward();

    cout << "List after deletion (backward): ";
    list.printBackward();

    cout << "The size of the is: " << list.getSize() << "\n";

    return 0;
}
