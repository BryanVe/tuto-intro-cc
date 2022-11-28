#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int matrix[4][4] = {
      {1, 0, 0, 0},
      {0, 2, 0, 0},
      {0, 0, 3, 0},
      {0, 0, 0, 4}};

  int n = sizeof(matrix[0]) / sizeof(int);
  int m = sizeof(matrix) / sizeof(matrix[0]);

  if (m != n)
  {
    cout << "La matriz no es cuadrada y por ende no es diagonal" << endl;
    return 0;
  }

  for (int j = 0; j < m; j++)
  {
    for (int i = 0; i < n; i++)
    {
      if (i != j)
      {
        if (matrix[j][i] != 0)
        {
          cout << "La matriz no es diagonal" << endl;
          return 0;
        }
      }
    }
  }

  cout << "La matriz es diagonal" << endl;
  return 0;
}
