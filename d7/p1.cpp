#include <iostream>
#include <cstdio>
#include <string.h>

using namespace std;

int main()
{
  char c;
  string cadena;

  cout << "Ingrese una cadena: ";
  getline(cin, cadena);

  cout << "Ingrese un caracter: ";
  cin >> c;

  int length = cadena.length();

  int counter = 0;
  for (int i = 0; i < length; i++)
  {
    if (cadena[i] == c)
    {
      counter++;
    }
  }

  cout << counter << endl;

  return 0;
}
