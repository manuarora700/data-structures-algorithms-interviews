#include <bits/stdc++.h>

using namespace std;

typedef struct Node
{
  int data;
  struct Node *next;
} Node;

Node *head = NULL;
Node *tail = NULL;

void insertAtBeg(int data)
{
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = NULL;

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
void insertAtEnd(int data)
{
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = NULL;

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
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = NULL;

  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
    return;
  }

  Node *temp = head;
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
  Node *temp = head;
  if (temp == NULL)
    return;
  head = head->next;
  tail->next = head;
  temp->next = NULL;
  free(temp);
}
void deleteAtEnd()
{
  Node *temp = head;
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
  Node *temp = head;
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
    Node *temp1 = tail;
    temp->next = head;
    tail = temp;
    free(temp1);
  }

  Node *temp1 = temp->next;
  temp->next = temp1->next;
  temp1->next = NULL;
  free(temp1);
}

void display()
{
  Node *temp;
  temp = head;
  do
  {
    std::cout << "Address= " << temp << "\n";
    std::cout << temp->data << " ";
    std::cout << temp->next << "\n";
    temp = temp->next;
  } while (temp != head)
}

int main()
{
  int t;
  std::cin >> t;

  while (t--)
  {
    int n;
    std::cin >> n;

    int data;
    for (int i = 0; i < n; i++)
    {
      // Code here
    }
  }
}