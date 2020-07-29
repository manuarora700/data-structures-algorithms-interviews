#include <bits/stdc++.h>

using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
  adj[u].push_back(v);
  adj[v].push_back(u);
}

void printList(vector<int> adj[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << "Adjacency list of node: " << i << " is : \n";
    for (auto ele : adj[i])
    {
      cout << "-> " << ele << endl;
    }
  }
}

void DFSRecur(vector<int> adj[], vector<bool> &visited, int u)
{
  visited[u] = true;
  cout << u << " ";

  for (int i = 0; i < adj[u].size(); i++)
  {
    if (visited[adj[u][i]] == false)
    {
      DFSRecur(adj, visited, adj[u][i]);
    }
  }
}

void DFS(vector<int> adj[], int n)
{
  vector<bool> visited(n, false);
  for (int i = 0; i < n; i++)
  {
    if (visited[i] == false)
    {
      DFSRecur(adj, visited, i);
    }
  }
}

int main()
{
  int nodes;
  int edges;
  cin >> nodes >> edges;

  vector<int> adj[nodes];
  for (int i = 0; i < edges; i++)
  {
    int u, v;
    cin >> u >> v;
    addEdge(adj, u, v);
  }
  DFS(adj, nodes);
  return 0;
}