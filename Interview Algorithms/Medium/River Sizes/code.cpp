#include <bits/stdc++.h>

using namespace std;

void traverseNode(int i, int j, vector<vector<int>> matrix,
                  vector<vector<int>> *visited, vector<int> *sizes);
vector<vector<int>> getUnvisitedNeighbors(int i, int j,
                                          vector<vector<int>> matrix,
                                          vector<vector<int>> visited);
// O(wh) time | O(wh) space
vector<int> riverSizes(vector<vector<int>> matrix)
{
  vector<int> sizes = {};
  vector<vector<int>> visited(matrix.size(),
                              vector<int>(matrix[0].size(), false));
  for (int i = 0; i < matrix.size(); i++)
  {
    for (int j = 0; j < matrix[i].size(); j++)
    {
      if (visited[i][j])
      {
        continue;
      }
      traverseNode(i, j, matrix, &visited, &sizes);
    }
  }
  return sizes;
}

void traverseNode(int i, int j, vector<vector<int>> matrix, vector<vector<int>> *visited, vector<int> *sizes)
{
  int currentRiverSize = 0;
  vector<vector<int>> nodesToExplore{{i, j}};

  while (nodesToExplore.size() != 0)
  {
    vector<int> currentNode = nodesToExplore.back();
    nodesToExplore.pop_back();
    i = currentNode[0]; // ith index in currentNode array
    j = currentNode[1]; // jth index in currentNode array

    if (visited->at[i][j]) // since visited is an address we use ->at method
      continue;
    visited->at[i][j] = true; // if not visited then mark visited

    if (matrix[i][j] == 0) // if land area is there then cont..
      continue;

    currentRiverSize++;
    vector<vector<int>> unvisitedNeighbours = getUnvisitedNeighbours(i, j, matrix, *visited);

    for (vector<int> neighbour : unvisitedNeighbours)
    {
      nodesToExplore.push_back(neighbour);
    }
  }
  if (currentRiverSize > 0)
    sizes->push_back(currentRiverSize);
}

vector<vector<int>> getUnvisitedNeighbours(int i, int j, vector<vector<int>> matrix, vector<vector<int>> visited)
{
  vector<vector<int>> unvisitedNeighbours{};
  if (i > 0 && !visited[i - 1][j])
  {
    unvisitedNeighbours.push_back({i - 1, j});
  }
  if (i < matrix.size() && !visited[i + 1][j])
  {
    unvisitedNeighbours.push_back({i + 1, j});
  }
  if (j > 0 && !visited[i][j - 1])
  {
    unvisitedNeighbours.push_back({i, j - 1});
  }
  if (j < matrix[0].size() - 1 && !visited[i][j + 1])
  {
    unvisitedNeighbours.push_back({i, j + 1});
  }
  return unvisitedNeighbours;
}

int main()
{
  return 0;
}