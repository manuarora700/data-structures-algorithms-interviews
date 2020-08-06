#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
  string name;
  vector<Node *> children;
  Node(string name) { this->name = name; }
  // O(v + e) time | O(v) space
  vector<string> depthFirstSearch(vector<string> *array)
  {
    array->push_back(this->name);
    for (int i = 0; i < this->children.size(); i++)
    {
      children[i]->depthFirstSearch(array);
    }
    return *array;
  }
  Node *addChild(string name)
  {
    Node *child = new Node(name);
    children.push_back(child);
    return this;
  }
};