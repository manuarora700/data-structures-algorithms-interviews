#include <bits/stdc++.h>
using namespace std;

typedef struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
} Node;

Node *head = NULL;
void insertAtBeg(int data)
{
  Node *newNode = (Node *)malloc(sizeof(Node));

  if (head == NULL)
  {
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;

    head = newNode;
    return;
  }
  newNode->data = data;
  newNode->next = head;
  newNode->prev = NULL;
  head->prev = newNode;
  head = newNode;
}

void insertAtEnd(int data)
{
  Node *newNode = (Node *)malloc(sizeof(Node));

  newNode->data = data;
  newNode->next = NULL;
  newNode->prev = NULL;

  Node *temp = head;

  if (temp == NULL)
  {
    head = newNode;
    return;
  }

  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = newNode;
  newNode->prev = temp;
}

void insertAtPos(int data, int pos)
{
  Node *newNode = (Node *)malloc(sizeof(Node));

  newNode->data = data;
  newNode->next = NULL;
  newNode->prev = NULL;

  Node *temp = head;
  int count = 1;
  if (temp == NULL)
  {
    head = newNode;
  }
  while (count < pos && temp->next != NULL)
  {
    count++;
    temp = temp->next;
  }
  if (temp->next == NULL)
  {
    temp->next = newNode;
    newNode->prev = temp;
    return;
  }
  newNode->next = temp->next;
  newNode->prev = temp;
  newNode->next->prev = newNode;
  temp->next = newNode;
}

void display()
{
  Node *temp;
  temp = head;

  while (temp != NULL)
  {
    std::cout << temp->data << " ";
    temp = temp->next;
  }
}
void deleteAtBeg()
{
  Node *temp = head;
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
  Node *temp = head;

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
  Node *temp1 = temp->next;
  temp->next = NULL;
  temp1->prev = NULL;
  free(temp1);
}
void deleteAtPos(int pos)
{
  Node *temp = head;
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
  Node *temp1 = temp->next;
  temp->next = temp1->next;
  temp1->next->prev = temp;
  temp1->next = NULL;
  temp->prev = NULL;
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
      std::cin >> data;
      insertAtBeg(data);
    }
    std::cout << "Insert at the beg: ";
    display();
  std:
    cout << "\n";
  }
  return 0;
}