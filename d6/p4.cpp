#include <iostream>
#include <cmath>

using namespace std;

float factorial(int n)
{
  if (n == 1)
    return 1;

  return n * factorial(n - 1);
}

int main()
{
  int n;
  cout << "Ingrese un número: ";
  cin >> n;

  int result = factorial(n);

  cout << n << endl;
  cout << result << endl;

  return 0;
}
