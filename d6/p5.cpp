#include <iostream>
#include <cmath>

using namespace std;

float fibo(int n)
{
  if (n <= 1)
    return n;

  return fibo(n - 1) + fibo(n - 2);
}

int main()
{
  int n;
  cout << "Ingrese un número: ";
  cin >> n;

  int result = fibo(n);

  cout << n << endl;
  cout << result << endl;

  return 0;
}
