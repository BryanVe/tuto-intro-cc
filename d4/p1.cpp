#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int arraySize;

  cout << "Ingrese el tamaño del arreglo: ";
  cin >> arraySize;
  cout << endl;

  int input[arraySize];

  for (int i = 0; i < arraySize; i++)
  {
    cout << "Ingrese un número entero: ";
    cin >> input[i];
  }

  int positiveCounter = 0;
  int negativeCounter = 0;
  int zeroCounter = 0;

  for (int i = 0; i < arraySize; i++)
  {
    if (input[i] == 0)
    {
      zeroCounter++;
    }
    else if (input[i] == abs(input[i]))
    {
      positiveCounter++;
    }
    // * input[i] != abs(input[i]
    else
    {
      negativeCounter++;
    }
  }

  cout << "Los valores son: " << positiveCounter << ", " << negativeCounter << ", " << zeroCounter << endl;

  return 0;
}
