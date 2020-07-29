#include <bits/stdc++.h>

using namespace std;

class Graph
{
  int V;          // number of nodes
  list<int> *adj; // pointer to an array containing adjacency lists

public:
  Graph(int V)
  {
    this->V = V;
    adj = new list<int>[V];
  }

  void addEdge(int u, int v);
  void printList(int nodes);

  void BFS(int v);
};

void Graph::addEdge(int u, int v)
{
  adj[v].push_back(u);
  adj[u].push_back(v);
}

void Graph::printList(int nodes)
{
  for (int i = 0; i < nodes; i++)
  {
    cout << "Adjacency list of nodes: " << i << " is : \n";
    for (auto ele : adj[i])
    {
      cout << "-> " << ele << endl;
    }
  }
}

void Graph::BFS(int v)
{
  bool *visited = new bool[V];

  for (int i = 0; i < v; i++)
  {
    visited[i] = false;
  }

  list<int> queue; // SLL acts as queue, push_back and pop_front are used
  visited[v] = true;
  queue.push_back(v);
  while (!queue.empty())
  {
    v = queue.front();
    cout << v << " ";

    queue.pop_front();
    for (auto ele : adj[v])
    {
      if (!visited[ele])
      {
        visited[ele] = true;
        queue.push_back(ele);
      }
    }
  }
}

int main()
{
  int nodes;
  int edges;
  cin >> nodes >> edges;
  Graph graph(nodes);
  for (int i = 0; i < edges; i++)
  {
    int u, v;
    cin >> u >> v;
    graph.addEdge(u, v);
  }
  graph.BFS(0);
  return 0;
}