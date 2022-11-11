#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int number = 20;
  int i = 0;
  int counter = 0;

  while (i <= number) {
    if (i % 2 != 0) {
      counter++;
      cout << i << ", ";
    }

    i++;
  }

  cout << endl << "Existe " << counter << " números impares entre 0 y " << number << endl;

  return 0;
}
