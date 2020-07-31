#include <bits/stdc++.h>

using namespace std;

int isValidMove(int x, int y, int tour[8][8])
{
  return (x >= 0 && x < 8 && y >= 0 && y < 8 && tour[x][y] == -1);
}

int knightTour(int currX, int currY, int moveCount, int tour[8][8], int x[8], int y[8])
{
  if (moveCount == 8 * 8)
  {
    return 1;
  }
  int nextX, nextY;
  for (int i = 0; i < 8; i++)
  {
    nextX = currX + x[i];
    nextY = currY + y[i];

    if (isValidMove(nextX, nextY, tour))
    {
      tour[nextX][nextY] = moveCount;
      if (knightTour(nextX, nextY, moveCount + 1, tour, x, y) == 1)
        return 1;
      else
        tour[nextX][nextY] = -1;
    }
  }
  return 0;
}

int main()
{
  int tour[8][8];

  // Initialising all the cells as non visited
  for (int i = 0; i < 8; i++)
  {
    for (int j = 0; j < 8; j++)
    {
      tour[i][j] = -1;
    }
  }

  tour[0][0] = 0;

  int x[8] = {2,
              1,
              -1,
              -2,
              -2,
              -1,
              1,
              2};
  int y[8] = {1,
              2,
              2,
              1,
              -1,
              -2,
              -2,
              -1};
  if (knightTour(0, 0, 1, tour, x, y) == 0)
  {
    cout << "Solution doesnt exist";
  }
  else
  {
    for (int i = 0; i < 8; i++)
    {
      for (int j = 0; j < 8; j++)
      {
        cout << tour[i][j] << " ";
      }
      cout << endl;
    }
  }
  return 0;
}