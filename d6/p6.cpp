#include <iostream>
#include <cmath>

using namespace std;

float sum(int n)
{
  if (n == 0)
  {
    return 0;
  }

  int currentNumber = (n - 1) * 2;

  return currentNumber + sum(n - 1);
}

int main()
{
  int n;
  cout << "Ingrese la cantidad de números pares a sumar: ";
  cin >> n;

  int result = sum(n);

  cout << n << endl;
  cout << result << endl;

  return 0;
}
