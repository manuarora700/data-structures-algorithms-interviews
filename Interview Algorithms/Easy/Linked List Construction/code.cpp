#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
  int data;
  Node *prev;
  Node *next;

  Node(int value)
  {
    data = value;
    prev = NULL;
    next = NULL;
  }
};

class DoublyLinkedList
{
public:
  Node *head;
  Node *tail;

  DoublyLinkedList()
  {
    head = NULL;
    tail = NULL;
  }

  // O(1) time | O(1) space

  Node *setHead(Node *node)
  {
    if (this->head == NULL)
    {
      this->head = node;
      this->tail = node;
      return node;
    }
    this->insertBefore(this->head, node);
  }

  // O(1) time | O(1) space

  void setTail(Node *node)
  {
    if (this->tail == NULL)
    {
      this->setHead(node);
    }
    this->insertAfter(this->tail, node);
  }

  // O(1) time | O(1) space

  Node *insertBefore(Node *node, Node *nodeToInsert)
  {
    Node *nodeToInsert;

    if (nodeToInsert == this->head && nodeToInsert == this->tail)
    {
      return nodeToInsert;
    }
    this->remove(nodeToInsert);

    nodeToInsert->prev = node->prev;
    nodeToInsert->next = node;
    if (node->prev == NULL)
    {
      this->head = nodeToInsert;
    }
    else
    {
      node->prev->next = nodeToInsert;
    }

    node->prev = nodeToInsert;
  }

  // O(1) time | O(1) space
  Node *insertAfter(Node *node, Node *nodeToInsert)
  {
    if (nodeToInsert == this->head && nodeToInsert == this->tail)
    {
      return nodeToInsert;
    }
    this->remove(nodeToInsert);

    nodeToInsert->prev = node;
    nodeToInsert->next = node->next;
    if (node->next == NULL)
    {
      this->tail = nodeToInsert;
    }
    else
    {
      node->next->prev = nodeToInsert;
    }
    node->next = nodeToInsert;
  }

  // O(p) time | O(1) space
  Node *insertAtPos(int pos, Node *nodeToInsert)
  {
    if (pos == 1)
    {
      this->setHead(nodeToInsert);
      return nodeToInsert;
    }

    Node *temp = this->head;
    int currentPos = 1;

    while (temp != NULL && currentPos != pos)
    {
      temp = temp->next;
      currentPos++;
    }

    if (temp != NULL)
    {
      this->insertBefore(temp, nodeToInsert);
    }
    else
    {
      this->setTail(nodeToInsert);
    }
  }

  // O(n) time | O(1) space

  void removeNodeWithValue(int value)
  {
    Node *temp = this->head;

    while (temp != NULL)
    {
      Node *nodeToRemove = temp;
      temp = temp->next;
      if (nodeToRemove->data = value)
      {
        this->remove(nodeToRemove);
      }
    }
  }

  // O(1) time | O(1) space

  void remove(Node *node)
  {
    if (node == this->head)
    {
      this->head = this->head->next;
    }
    if (node == this->tail)
    {
      this->tail = this->tail->prev;
    }
    this->removeNodeBindings(node);
  }

  // O(1) time | O(1) space
  void removeNodeBindings(Node *node)
  {
    if (node->prev != NULL)
    {
      node->prev->next = node->next;
    }
    if (node->next != NULL)
    {
      node->next->prev = node->prev;
    }
    node->prev = NULL;
    node->next = NULL;
  }

  // O(n) time | O(1) space
  int containsNodeWithValue(int value)
  {
    Node *temp = this->head;

    while (temp != NULL && temp->data != value)
    {
      temp = temp->next;
    }
    return temp->data;
  }
};