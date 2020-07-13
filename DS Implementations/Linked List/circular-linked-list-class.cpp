#include <bits/stdc++.h>
using namespace std;

class CllNode
{
public:
  int data;
  CllNode *next;
  CllNode(int data)
  {
    this->data = data;
    this->next = nullptr;
  }
};

class Cll
{
public:
  CllNode *head;
  CllNode *tail;
  Cll()
  {
    this->head = nullptr;
    this->tail = nullptr;
  }

  void insertAtBeg(int data)
  {
    CllNode *newNode = new CllNode(data);

    if (head == NULL)
    {
      head = newNode;
      tail = newNode;
      return;
    }

    newNode->next = head;
    head = newNode;
    tail->next = head;
  }
  void insertAtEndint(int data)
  {
    CllNode *newNode = new CllNode(data);

    if (head == NULL)
    {
      head = newNode;
      tail = newNode;
      return;
    }
    tail->next = newNode;
    tail = newNode;
    tail->next = head;
  }
  void insertAtPos(int data, int pos)
  {
    CllNode *newNode = new CllNode(data);

    if (head == NULL)
    {
      head = newNode;
      tail = newNode;
      return;
    }

    CllNode *temp = head;
    if (temp->next == NULL)
    {
      tail->next = newNode;
      tail = newNode;
      tail->next = head;
      return;
    }

    int count = 1;
    while (count < pos && temp->next != head)
    {
      count++;
      temp = temp->next;
    }
    if (temp->next == head)
    {
      tail->next = newNode;
      tail = newNode;
      tail->next = head;
      return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
  }
};