#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int array1[] = {1, 2, 3, 4, 5, 9, 7, 8, 9, 10};
  int array2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  int arraySize = sizeof(array1) / sizeof(int);

  bool flag = true;
  for (int i = 0; i < arraySize; i++) {
    if (array1[i] != array2[i]) {
      flag = false;
      break;
    }
  }

  if (flag) {
    cout << "Los arreglos son iguales" << endl;
  }
  else {
    cout << "Los arreglos son diferentes" << endl;
  }

  return 0;
}
