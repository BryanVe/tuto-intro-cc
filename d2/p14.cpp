#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int num1 = 1;
  int num2 = 1;

  cout << num1 << ", ";

  while (num1 < 50000)
  {
    int aux = num1;
    num1 = num1 + num2;
    num2 = aux;

    cout << num2 << ", ";
  }

  cout << endl;

  return 0;
}