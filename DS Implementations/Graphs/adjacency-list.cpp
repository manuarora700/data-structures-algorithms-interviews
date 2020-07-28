#include <bits/stdc++.h>

using namespace std;

class Graph
{
  int nodes;
  list<int> *adj;

public:
  Graph(int n)
  {
    nodes = n;
    adj = new list<int>[nodes];
  }

  void addEdge(int u, int v)
  {
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  void printList()
  {
    for (int i = 0; i < nodes; i++)
    {
      cout << "Adjacency nodes of node " << i << " is";
      for (auto ele : adj[i])
      {
        cout << "-> " << ele << endl;
      }
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
  graph.printList();

  return 0;
}