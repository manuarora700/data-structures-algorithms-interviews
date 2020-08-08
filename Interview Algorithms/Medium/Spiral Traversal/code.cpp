// Time: O(n) | Space: O(n) , n = total number of elements in the array

#include <bits/stdc++.h>

using namespace std;

vector<int> spiralTraversal(vector<vector<int>> array)
{
  int size = array.size();

  int sr = 0;        // start row
  int sc = 0;        //  start column
  int er = size - 1; // end row
  int ec = size - 1; // end column
  vector<int> final;
  while (sr < er && sc < ec)
  {
    for (int i = sc; i <= ec; i++)
    {
      final.push_back(array[sr][i]);
    }

    for (int i = sr + 1; i <= er; i++)
    {
      final.push_back(array[i][ec]);
    }

    for (int i = ec - 1; i >= sc; i--)
    {
      if (sr == er)
        break;
      final.push_back(array[er][i]);
    }

    for (int i = er - 1; i > sr; i--)
    {
      if (sc == ec)
        break;
      final.push_back(array[i][sc]);
    }

    sc++;
    sr++;
    er--;
    ec--;
  }

  for (int i = 0; i < final.size(); i++)
  {
    cout << final[i] << " ";
  }
}

int main()
{
  vector<vector<int>> traversal{
      {1, 2, 3, 4},
      {12, 13, 14, 5},
      {11, 16, 15, 6},
      {10, 9, 8, 7}};

  spiralTraversal(traversal);

  // for (int i = 0; i < traversal.size(); i++)
  // {
  //   for (int j = 0; j < traversal.size(); j++)
  //   {
  //     cout << traversal[i][j] << " ";
  //   }
  //   cout << endl;
  // }
}