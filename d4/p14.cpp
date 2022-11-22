#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int array[] = {-1, -2, -3, -4, -1, -1, -2, 0, 10, 20, 20, 20, 20};
  int arraySize = sizeof(array) / sizeof(int);

  int numbers[arraySize];
  int frequencies[arraySize];

  for (int i = 0; i < arraySize; i++)
  {
    int currentNumber = array[i];
    int frequency = 0;

    for (int j = 0; j < arraySize; j++)
    {
      if (currentNumber == array[j])
      {
        frequency++;
      }
    }

    numbers[i] = currentNumber;
    frequencies[i] = frequency;
  }

  int i = arraySize;
  bool sorted = false;
  while ((i > 1) && !sorted)
  {
    sorted = true;

    for (int j = 1; j < i; j++)
    {
      if (frequencies[j - 1] < frequencies[j])
      {
        // * Ordenando las frecuencias
        int temp1 = frequencies[j - 1];
        frequencies[j - 1] = frequencies[j];
        frequencies[j] = temp1;

        // * Ordenando los números a la par
        int temp2 = numbers[j - 1];
        numbers[j - 1] = numbers[j];
        numbers[j] = temp2;

        sorted = false;
      }
    }
  }

  cout << "Frecuencia: " << frequencies[0] << ", Número: " << numbers[0] << endl;

  return 0;
}
