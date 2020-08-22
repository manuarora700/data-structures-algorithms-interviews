#include <bits/stdc++.h>
using namespace std;
class TrieNode
{
public:
  unordered_map<char, TrieNode *> children;
};
class SuffixTrie
{
public:
  TrieNode *root;
  char endSymbol;
  SuffixTrie(string str)
  {
    this->root = new TrieNode();
    this->endSymbol = '*';
    this->populateSuffixTrieFrom(str);
  }
  // O(n^2) time | O(n^2) space
  void populateSuffixTrieFrom(string str)
  {
    for (int i = 0; i < str.length(); i++)
    {
      this->insertSubstringStartingAt(i, str);
    }
  }
  void insertSubstringStartingAt(int i, string str)
  {
    TrieNode *node = this->root;
    for (int j = i; j < str.length(); j++)
    {
      char letter = str[j];
      if (node->children.find(letter) == node->children.end())
      {
        TrieNode *newNode = new TrieNode();
        node->children.insert({letter, newNode});
      }
      node = node->children[letter];
    }
    node->children.insert({this->endSymbol, NULL});
  }
  // O(m) time | O(1) space
  bool contains(string str)
  {
    TrieNode *node = this->root;
    for (char letter : str)
    {
      if (node->children.find(letter) == node->children.end())
      {
        return false;
      }
      node = node->children[letter];
    }
    return node->children.find(this->endSymbol) != node->children.end();
  }
};