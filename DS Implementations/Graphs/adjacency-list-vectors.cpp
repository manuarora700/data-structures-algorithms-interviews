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
    cout << "Adjacency list of node: " << i << " is: \n";

    for (auto ele : adj[i])
    {
      cout << "-> " << ele << "\n";
    }
  }
}

int main()
{
  int n, e;
  cin >> n >> e;

  vector<int> adj[n];

  for (int i = 0; i < e; i++)
  {
    int u, v;
    cin >> u >> v;

    addEdge(adj, u, v);
  }

  printList(adj, n);
}