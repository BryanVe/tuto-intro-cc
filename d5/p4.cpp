#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int matrix[3][4] = {
      {1, 0, 10, 0},
      {0, 2, 0, 3},
      {0, 0, 3, 1}};

  int n = sizeof(matrix[0]) / sizeof(int);
  int m = sizeof(matrix) / sizeof(matrix[0]);

  int result[n][m];

  for (int j = 0; j < n; j++)
  {
    for (int i = 0; i < m; i++)
    {
      result[j][i] = matrix[i][j];
    }
  }

  for (int j = 0; j < n; j++)
  {
    for (int i = 0; i < m; i++)
    {
      cout << result[j][i] << "\t";
    }
    cout << endl;
  }

  return 0;
}
