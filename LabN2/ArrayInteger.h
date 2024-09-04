#ifndef ARRAYINTEGER_H
#define ARRAYINTEGER_H

class ArrayInteger{

    public:
        ArrayInteger(); //Constructor
        ~ArrayInteger(); //Destructor
        ArrayInteger(int size); //Constructor that initializes the array with a given size
        int getSize(); // Gets the current size of the array
        void print(); // Prints the content of the array
    
    private:
        int size; 
        int* array;
        int element;
};

#endif