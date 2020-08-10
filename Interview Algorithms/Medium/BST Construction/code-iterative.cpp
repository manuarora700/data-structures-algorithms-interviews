// Time: O(logn) Balanced BST, O(n) worst case
// Space: O(n)

#include <bits/stdc++.h>

using namespace std;

class BST
{
public:
  int val;
  BST *left;
  BST *right;

  BST(int val)
  {
    this->val = val;
    left = nullptr;
    right = nullptr;
  }

  // Average: O(nlogn) time | O(1) space
  // Worst: O(n) time | O(1) space
  BST &insert(int val)
  {
    BST *current = this;
    while (true)
    {
      if (val < this->val)
      {
        if (current->left == NULL)
        {
          current->left = new BST(val);
          break;
        }
        else
        {
          current = current->left;
        }
      }
      else
      {
        if (current->right == NULL)
        {
          current->right = new BST(val);
          break;
        }
        else
        {
          current = current->right;
        }
      }
    }
    return *this;
  }

  // Average: O(nlogn) time | O(1) space
  // Worst: O(n) time | O(1) space
  bool contains(int val)
  {
    BST *current = this;
    while (current != NULL)
    {
      if (val < current->val)
      {
        current = current->left;
      }
      else if (val > current->val)
      {
        current = current->right;
      }
      else
      {
        // element found
        return true;
      }
    }
    return false;
  }
  BST &remove(int val, BST *parentNode = NULL)
  {
    BST *currentNode = this;
    while (currentNode != NULL)
    {
      if (val < currentNode->val)
      {
        parentNode = currentNode;
        currentNode = currentNode->left;
      }
      else if (val > currentNode->val)
      {
        parentNode = currentNode;
        currentNode = currentNode->right;
      }
      else
      {
        if (currentNode->left != NULL && currentNode->right != NULL)
        {
          currentNode->val = currentNode->right->getMinValue();
          currentNode->right->remove(currentNode->val, currentNode);
        }
        else if (parentNode == NULL)
        {
          if (currentNode->left != NULL)
          {
            currentNode->val = currentNode->left->val;
            currentNode->right = currentNode->left->right;
            currentNode->left = currentNode->left->left;
          }
          else if (currentNode->right != NULL)
          {
            currentNode->val = currentNode->right->val;
            currentNode->left = currentNode->right->left;
            currentNode->right = currentNode->right->right;
          }
          else
          {
            // This is a single-node tree; do nothing.
          }
        }
        else if (parentNode->left == currentNode)
        {
          parentNode->left = currentNode->left != NULL ? currentNode->left
                                                       : currentNode->right;
        }
        else if (parentNode->right == currentNode)
        {
          parentNode->right = currentNode->left != NULL ? currentNode->left
                                                        : currentNode->right;
        }
        break;
      }
    }
    return *this;
  }
  int getMinValue()
  {
    if (left == NULL)
    {
      return val;
    }
    else
    {
      return left->getMinValue();
    }
  }
};