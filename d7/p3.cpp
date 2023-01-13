#include <iostream>
#include <cstdio>
#include <string.h>

using namespace std;

int main()
{
  string cadena;
  string resultado;

  cout << "Ingrese una cadena: ";
  getline(cin, cadena);

  int length = cadena.length();

  for (int i = length - 1; i > -1; i--)
  {
    resultado = resultado + cadena[i];
  }

  cout << resultado << endl;

  return 0;
}
