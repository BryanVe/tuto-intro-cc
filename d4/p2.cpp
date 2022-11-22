#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int arraySize = 40;

  unsigned long long int fiboNumbers[arraySize];
  // * Rellenar un arreglo con 50 número de Fibonacci
  int num1 = 1;
  int num2 = 1;

  fiboNumbers[0] = num1;
  for (int i = 0; i < arraySize; i++) {
    int aux = num1;
    num1 = num1 + num2;
    num2 = aux;

    fiboNumbers[i] = num2;
  }


  for (int i = 0; i < arraySize; i++) {
    cout << fiboNumbers[arraySize - i - 1] << ", ";
  }

  return 0;
}
