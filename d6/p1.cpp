#include <iostream>
#include <cmath>
#include <time.h>
#include <stdlib.h>

using namespace std;

float mean(float numbers[], int size)
{

  if (size == 1)
  {
    return numbers[size - 1];
  }

  float auxMean = mean(numbers, size - 1);

  return (auxMean * (size - 1) + numbers[size - 1]) / size;
}

int main()
{
  srand(time(NULL));

  int size;
  cout << "Ingrese el tamaño del arreglo: ";
  cin >> size;

  float numbers[size];
  for (int i = 0; i < size; i++)
  {
    numbers[i] = rand() % (10 - 1) + 1;
  }

  float result = mean(numbers, size);

  for (int i = 0; i < size; i++)
  {
    cout << numbers[i] << ", ";
  }

  cout << endl;
  cout << result << endl;
  return 0;
}
