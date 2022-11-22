#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int array[] = {-1, -2, -3, -4};
  int arraySize = sizeof(array) / sizeof(int);

  int maxValue = INT32_MIN;
  int minValue = INT32_MAX;

  for (int i = 0; i < arraySize; i++)
  {
    if (maxValue < array[i])
    {
      maxValue = array[i];
    }
    if (minValue > array[i])
    {
      minValue = array[i];
    }
  }

  cout << maxValue << endl;
  cout << minValue << endl;

  return 0;
}
