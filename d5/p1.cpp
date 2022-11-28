#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int m, n;

  do
  {
    cout << "Ingrese un valor para m (menor a 10): ";
    cin >> m;
  } while (m > 10 || m < 1);

  do
  {
    cout << "Ingrese un valor para n (menor a 10): ";
    cin >> n;
  } while (n > 10 || n < 1);

  int matrix[m][n];

  for (int j = 0; j < m; j++)
  {
    for (int i = 0; i < n; i++)
    {
      int value;
      cout << "Ingrese un valor para la posición [" << i << ", " << j << "]: ";
      cin >> value;
      matrix[j][i] = value;
    }
  }

  for (int j = 0; j < m; j++)
  {
    int sum = 0;
    int minValue = INT32_MAX;

    for (int i = 0; i < n; i++)
    {
      if (minValue > matrix[j][i])
      {
        minValue = matrix[j][i];
      }
      sum += matrix[j][i];
    }

    cout << "Suma total de la fila " << j << ": " << sum << endl;
    cout << "El mínimo valor de la fila " << j << ": " << minValue << endl;
  }

  for (int j = 0; j < m; j++)
  {
    int sum = 0;
    int maxValue = INT32_MIN;

    for (int i = 0; i < n; i++)
    {
      if (maxValue < matrix[i][j])
      {
        maxValue = matrix[i][j];
      }
      sum += matrix[i][j];
    }

    cout << "Promedio de la columna " << j << ": " << (sum / m) << endl;
    cout << "El máximo valor de la columna " << j << ": " << maxValue << endl;
  }

  int globalMaxValue = INT32_MIN;
  int globalMaxValuePosX = 0;
  int globalMaxValuePosY = 0;
  for (int j = 0; j < m; j++)
  {
    for (int i = 0; i < n; i++)
    {
      if (globalMaxValue < matrix[i][j])
      {
        globalMaxValue = matrix[i][j];
        globalMaxValuePosX = i;
        globalMaxValuePosY = j;
      }
    }
  }

  cout << "El máximo valor de la matriz es " << globalMaxValue << " y se encuentra en la posición [" << globalMaxValuePosX << ", " << globalMaxValuePosY << "]" << endl;

  return 0;
}
