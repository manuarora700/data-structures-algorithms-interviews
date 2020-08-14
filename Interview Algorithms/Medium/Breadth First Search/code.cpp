#include <bits/stdc++.h>

using namespace std;

class Node
{
  string name;
  vector<Node *> children;

  Node(string name)
  {
    this->name = name;
  }
  // Time: O(V + E) | Space: O(V)
  vector<string> bfs(vector<string> *array)
  {
    deque<Node *> queue{this};
    while (!queue.empty())
    {
      Node current = *queue.front();
      queue.pop_front();
      array->push_back(current.name);
      for (int i = 0; i < current.children.size(); i++)
      {
        queue.push_back(current.children[i]);
      }
    }
    return *array;
  }

  Node *addNode(string name)
  {
    Node *child = new Node(name);
    children.push_back(child);
    return this;
  }
}