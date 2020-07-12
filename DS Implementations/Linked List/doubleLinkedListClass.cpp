#include <bits/stdc++.h>

using namespace std;

class DllNode
{
public:
  int data;
  DllNode *next;
  DllNode *prev;
  DllNode(int node_data)
  {
    this->data = node_data;
    this->next = nullptr;
    this->prev = nullptr;
  }
};

class Dll
{
public:
  DllNode *head;
  Dll()
  {
    this->head = nullptr;
  }

  void insertAtBeg(int data)
  {
    DllNode *node = new DllNode(data);

    if (head == nullptr)
    {
      head = node;
    }
    else
    {
      node->next = head;
      node->prev = NULL;
      head->prev - node;
      head = node;
    }
  }
  void insertAtEnd(int data)
  {
    DllNode *node = new DllNode(data);

    DllNode *temp = head;
    if (temp == nullptr)
    {
      head = node;
    }
    else
    {
      while (temp->next != nullptr)
      {
        temp = temp->next;
      }
      temp->next = node;
      node->prev = temp;
    }
  }
  void insertAtPos(int data, int pos)
  {
    DllNode *node = new DllNode(data);

    DllNode *temp = head;

    if (temp == NULL)
    {
      head = node;
      return;
    }
    int count = 1;
    while (count < pos && temp->next != NULL)
    {
      count++;
      temp = temp->next;
    }
    if (temp->next = NULL)
    {
      temp->next = node;
      node->prev = temp;
      return;
    }

    node->next = temp->next;
    node->prev = temp;
    node->next->prev = node;
    temp->next = node;
  }
}