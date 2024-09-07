#ifndef ARRAYINTEGER_H
#define ARRAYINTEGER_H

class ArrayInteger{

    public:
        ArrayInteger(); //Constructor
        ~ArrayInteger(); //Destructor
        ArrayInteger(int size); //Constructor that initializes the array with a given size
        void addElement(int element); // Adds an element to the end of the array
        void insertElementAt (int element, int position); // Inserts an element at the specified position in the array
        int getElementAt (int position); // Gets the element at the specified position in the array
        int getSize(); // Gets the current size of the array
        void print(); // Prints the content of the array
        void insertionSort(); // Sorts the array using the insertion sort algorithm
    
    private:
        int size; 
        int* array;
        int element;
};

#endif