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