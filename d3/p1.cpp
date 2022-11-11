#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int input;

  cout << "Ingrese el valor del ángulo en grados sexagesimales: ";
  cin >> input;

  if (input % 90 == 0)
  {
    cout << "El ángulo " << input << " es cuadrantal." << endl;
    return 0;
  }

  // * Si el ángulo es igual a el mismo ángulo en valor absoluto, el número es positivo, caso contrario no
  bool isPositive = input == abs(input);
  int residual = 0;

  // * Revisamos si el número es positivo
  if (isPositive)
  {
    // * En caso exceda 360, tiene más de una vuelta por lo que deseamos reducirlo a una sola vuelta
    if (input > 360)
    {
      // * Con el módulo 360 lo que hacemos es obtener el residuo (una vuelta)
      residual = input % 360;
    }
    // * Caso contrario, el ángulo es menor a una vuelta
    else
    {
      residual = input;
    }
  }
  // * Si el número es negativo, haremos un proceso similar pero con unas variaciones
  else
  {
    // * Si el ángulo es más pequeño que 360, tiene más de una vuelta por lo que también deseamos reducirlo a una sola vuelta
    if (input < -360)
    {
      // * Con el módulo 360 lo que hacemos es obtener el residuo (una vuelta)
      // * Pero en esta ocasión obtenemos el complemento para tratarlo como un positivo
      // * Pej: de -20, su complemento sería 360 - 20 = 340, esto estaría en el cuarto cuadrante
      residual = 360 + (input % 360);
    }
    // * Caso contrario, el ángulo es menor a una vuelta, de la misma manera obtenemos su complemento
    else
    {
      residual = 360 + input;
    }
  }

  if (0 < residual && residual < 90)
  {
    cout << "El ángulo " << input << " pertenece al primer cuadrante." << endl;
    return 0;
  }

  if (90 < residual && residual < 180)
  {
    cout << "El ángulo " << input << " pertenece al segundo cuadrante." << endl;
    return 0;
  }

  if (180 < residual && residual < 270)
  {
    cout << "El ángulo " << input << " pertenece al tercer cuadrante." << endl;
    return 0;
  }

  if (270 < residual && residual < 360)
  {
    cout << "El ángulo " << input << " pertenece al cuarto cuadrante." << endl;
    return 0;
  }

  return 0;
}
