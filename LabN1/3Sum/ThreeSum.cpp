// Brute force approach for ThreeSum...
// Developed in c++

#include <chrono>
#include <iostream>
#include <fstream>

using namespace std;
using namespace std::chrono;

int main(){

  const int arraySize = 3000;
  const char *filename = "numbers3000.txt";
  int numbers[arraySize];

  ifstream myFile(filename);

  if (!myFile){
    cerr << "Error to open the file " << filename << endl;
    return 1;
  }

  cout << "3-Sum: Brute force approach\n";

  // Leer los números del archivo y almacenarlos en el arreglo
  for (int i = 0; i < arraySize; ++i){
    myFile >> numbers[i];
  }

  myFile.close();

  // Imprimir el contenido del arreglo
  cout << "This is an array of integer numbers: " << endl;
  for (int i = 0; i < arraySize; ++i){
    cout << numbers[i] << " ";
  }
  cout << endl;

  auto start = high_resolution_clock::now();

  cout << "These are the found tuples: " << endl;
  for (int i = 0; i < arraySize; ++i){
    for (int j = i + 1; j < arraySize; ++j){
      for (int k = j + 1; k < arraySize; ++k){
        if (numbers[i] + numbers[j] + numbers[k] == 0){
          // Print the tuples that satisfy the condition...
          cout << "[" << numbers[i] << ", " << numbers[j] << ", " << numbers[k] << "]" << endl;
        }
      }
    }
  }

  // Stop timer
  auto stop = high_resolution_clock::now();

  // Calculate execution time
  auto duration = duration_cast<seconds>(stop - start);

  // Print execution time...
  cout << "Execution time is: " << duration.count() << " sec" << endl;

}