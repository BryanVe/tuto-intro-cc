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

  for (int i = 0; i < length; i = i + 2)
  {
    for (int j = 0; j < int(cadena[i] - 48); j++)
    {
      resultado = resultado + cadena[i + 1];
    }
  }

  cout << resultado << endl;

  return 0;
}
