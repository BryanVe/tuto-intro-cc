#include <iostream>
#include <cmath>

using namespace std;

float mcd(int a, int b)
{
  if (b == 0)
  {
    return a;
  }

  int r = a % b;
  return mcd(b, r);
}

int main()
{
  int a, b;
  cout << "Ingrese el primer número: ";
  cin >> a;
  cout << "Ingrese el segundo número: ";
  cin >> b;

  int result = mcd(a, b);

  cout << result << endl;

  return 0;
}
