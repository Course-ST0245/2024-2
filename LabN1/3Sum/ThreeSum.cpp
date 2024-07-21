// Brute force approach for ThreeSum...
// Developed in c++

#include <chrono>
#include <iostream>
#include <fstream>

using namespace std;
using namespace std::chrono;

int main() {

  //Start timer...
  const int arraySize = 5;
  const char* filename = "numbers5.txt";
  int numbers[arraySize];

  ifstream myFile(filename);

  if (!myFile){
    cerr << "Error al abrir el archivo " << filename << endl;
    return 1;
  }

  cout << "3-Sum: Brute force approach\n";
  cout << "This is an array of integer numbers: " << endl;

  // Print the content of the array...
  for (int i = 0; i < arraySize; ++i) {
    cout << numbers[i] << " ";
  }
  cout << endl;
    // Leer los números del archivo y almacenarlos en el arreglo
    for (int i = 0; i < arraySize; ++i) {
        myFile >> numbers[i];
    }

    myFile.close();

    // Imprimir el contenido del arreglo
    cout << "Data file " << filename << ":" << endl;
    for (int i = 0; i < arraySize; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;  

  auto start = high_resolution_clock::now();

  cout << "These are the tuples: " << endl;
  for (int i = 0; i < arraySize - 3; ++i) {
    for (int j = i + 1; j < arraySize - 2; ++j) {
      for (int k = j + 1; k < arraySize - 1; ++k) {
        if (numbers[i] + numbers[j] + numbers[k] == 0) {
          // Print tuples that satisfie the condition...
          cout << "[" << numbers[i] << ", " << numbers[j] << ", " << numbers[k] << "]" << endl;
        }
      }
    }
  }

  // Stop timer
  auto stop = high_resolution_clock::now();

  // Calculate execution time
  auto duration = duration_cast<microseconds>(stop - start) / 1000000;

  // Print execution time...
  cout << "Execution time is: " << duration.count() << " secs"
       << endl;
}