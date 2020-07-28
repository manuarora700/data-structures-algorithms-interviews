#include <bits/stdc++.h>

using namespace std;

class Graph
{
  bool **adjMat;
  int nodes;

public:
  Graph(int nodes)
  {
    this->nodes = nodes;

    // 2d array creation
    adjMat = new bool *[nodes];

    for (int i = 0; i < nodes; i++)
    {
      adjMat[i] = new bool[nodes];

      for (int j = 0; j < nodes; j++)
      {
        adjMat[i][j] = false;
      }
    }
  }

  void addEdge(int u, int v)
  {
    adjMat[u][v] = true;
    adjMat[v][u] = true;
  }

  void printMat()
  {
    for (int i = 0; i < nodes; i++)
    {
      cout << "i: ";
      for (int j = 0; j < nodes; j++)
      {
        cout << adjMat[i][j] << " ";
      }
      cout << endl;
    }
  }
};

int main()
{
  int n, e;
  cin >> n >> e;

  Graph graph(n);
  for (int i = 0; i < n; i++)
  {
    int u, v;
    cin >> u >> v;
    graph.addEdge(u, v);
  }

  graph.printMat();
  return 0;
}