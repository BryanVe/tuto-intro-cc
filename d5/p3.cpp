#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int matrix[4][4] = {
      {1, 0, 10, 0},
      {0, 2, 0, 0},
      {0, 0, 3, 0},
      {0, 0, 0, 4}};

  int n = sizeof(matrix[0]) / sizeof(int);
  int m = sizeof(matrix) / sizeof(matrix[0]);
  int maxValue = INT32_MIN, minValue = INT32_MAX;
  int maxValuePosX = 0, maxValuePosY = 0;
  int minValuePosX = 0, minValuePosY = 0;

  for (int j = 0; j < m; j++)
  {
    for (int i = 0; i < n; i++)
    {
      if (maxValue < matrix[j][i])
      {
        maxValue = matrix[j][i];
        maxValuePosX = j;
        maxValuePosY = i;
      }
      if (minValue > matrix[j][i])
      {
        minValue = matrix[j][i];
        minValuePosX = j;
        minValuePosY = i;
      }
    }
  }

  cout << "El valor máximo de la matriz es " << maxValue << " y se encuentra en la posición [" << maxValuePosX << ", " << maxValuePosY << "]" << endl;
  cout << "El valor mínimo de la matriz es " << minValue << " y se encuentra en la posición [" << minValuePosX << ", " << minValuePosY << "]" << endl;

  return 0;
}
