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

  void deleteAtBeg()
  {
    CllNode *temp = head;
    if (temp == NULL)
      return;
    head = head->next;
    tail->next = head;
    temp->next = NULL;
    free(temp);
  }
  void deleteAtEnd()
  {
    CllNode *temp = head;
    if (temp == NULL)
      return;

    if (temp->next == NULL)
    {
      head = NULL;
      tail = NULL;
      free(temp);
      return;
    }
    while (temp->next->next != head)
    {
      temp = temp->next;
    }

    Node *temp1 = tail;
    temp->next = head;
    temp1->next = NULL;
    tail = temp;
    free(temp1);
  }
  void deleteAtPos(int pos)
  {
    CllNode *temp = head;
    if (temp == NULL)
      return;

    if (temp->next == NULL)
    {
      head = NULL;
      tail = NULL;
      free(temp);
      return;
    }

    int count = 1;
    while (count < pos - 1 && temp->next != head)
    {
      count++;
      temp = temp->next;
    }
    if (temp->next == head)
    {
      CllNode *temp1 = tail;
      temp->next = head;
      tail = temp;
      free(temp1);
    }

    CllNode *temp1 = temp->next;
    temp->next = temp1->next;
    temp1->next = NULL;
    free(temp1);
  }
};