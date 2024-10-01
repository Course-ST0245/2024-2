#include "ArrayStack.h"
#include <string>
#include <iostream>

using namespace std;

int main() {
    try {
        ArrayStack<int> stack(5);  // Stack of integers with capacity 5
        ArrayStack<string> stackString(10); 

        stack.push(10);
        stack.push(20);
        stack.push(30);

        cout << "Top element: " << stack.top() << endl;  // Should print 30
        stack.pop();
        cout << "Top element after pop: " << stack.top() << endl;  // Should print 20

        stack.pop();
        stack.pop();
        
        // Attempting to pop an empty stack
        //stack.pop();  // This will throw an exception

        stackString.push("Hello");
        stackString.push("World");

        cout << "Top element: " << stackString.top() << endl;  // Should print World

    } catch (const StackEmpty& e) {
        cerr << "Error: " << e.what() << endl;
    } catch (const StackFull& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
