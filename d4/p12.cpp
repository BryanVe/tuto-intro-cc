#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int array[] = {-1, -2, -3, -4, -1, -1, -2, 0, 10, 20, 20, 20, 20};
  int arraySize = sizeof(array) / sizeof(int);

  int i = arraySize;
  bool sorted = false;
  while ((i > 1) && !sorted)
  {
    sorted = true;

    for (int j = 1; j < i; j++)
    {
      if (array[j - 1] > array[j])
      {
        // * Ordenando los números a la par
        int temp = array[j - 1];
        array[j - 1] = array[j];
        array[j] = temp;

        sorted = false;
      }
    }
  }

  for (int i = 0; i < arraySize; i++)
  {
    if (array[i] != array[i + 1])
    {
      cout << array[i] << ", ";
    }
  }

  return 0;
}
