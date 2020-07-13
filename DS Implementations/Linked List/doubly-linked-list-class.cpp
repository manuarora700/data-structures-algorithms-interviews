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
  void deleteAtBeg()
  {
    DllNode *temp = head;
    if (temp == NULL)
    {
      head = NULL;
      std::cout << "LL is empty\n";
      return;
    }
    if (temp->next = NULL)
    {
      head = NULL;
      free(temp);
      return;
    }
    head = head->next;
    head->prev = NULL;
    temp->next = NULL;
    free(temp);
  }
  void deleteAtEnd()
  {
    DllNode *temp = head;

    if (temp == nullptr)
    {
      std::cout << "List empty";
      return;
    }
    if (temp->next == NULL)
    {
      head = NULL;
      free(temp);
      return;
    }

    while (temp->next->next != NULL)
    {
      temp = temp->next;
    }
    DllNode *temp1 = temp->next;
    temp->next = NULL;
    temp1->prev = NULL;
    free(temp1);
  }
  void deleteAtPos(int pos)
  {
    DllNode *temp = head;
    if (temp == nullptr)
    {
      std::cout << "LL is empty";
      return;
    }
    if (temp->next == NULL)
    {
      head = NULL;
      free(temp);
      return;
    }
    int count = 1;

    while (count < pos - 1)
    {
      count++;
      temp - temp->next;
    }
    DllNode *temp1 = temp->next;
    temp->next = temp1->next;
    temp1->next->prev = temp;
    temp1->next = NULL;
    temp->prev = NULL;
  }
}