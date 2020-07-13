#include <bits/stdc++.h>

typedef struct Node
{
  int data;
  struct Node *next;
} Node;

Node *head = NULL;

void insertAtBeginning(int data)
{
  Node *newNode = (Node *)malloc(sizeof(Node));

  newNode->data = data;
  newNode->next = head;
  head = newNode;
}

void insertAtEnd(int data)
{
  // Create the node first
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = NULL;

  // Traverse to the end
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
}

void insertAtMiddle(int data, int pos)
{
  Node *temp = head;
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = NULL;

  if (temp = NULL)
  {
    head = newNode;
    return;
  }
  int count = 1;

  while (count < pos && temp->next != NULL)
  {
    count++;
    temp = temp->next;
  }

  if (temp->next == NULL)
  {
    temp->next = newNode;
    //std::cout << "Invalid Position";
    return;
  }
  newNode->next = temp->next;
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
    std::cout << "LL is empty bruh!";
    return;
  }

  head = head->next;
  free(temp);
}

void deleteAtEnd()
{
  Node *temp = head;
  if (temp == NULL)
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
  while (temp->next->next != NULL)
  {
    temp = temp->next;
  }

  Node *temp1 = temp->next;
  temp->next = NULL;
  free(temp1);
}

void deleteAtPos(int pos)
{
  Node *temp = head;

  if (temp == NULL)
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
    temp = temp->next;
  }

  Node *temp1 = temp->next;
  temp->next = temp1->next;
  temp1->next = NULL;
  free(temp1);
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
      insertAtBeginning(data);
    }

    std::cout << "Insert at Beginning: ";
    display();
    std::cout << "\n";
    head = NULL;

    for (int i = 0; i < n; i++)
    {
      std::cin >> data;
      insertAtEnd(data);
    }

    std::cout << "Insert at End: ";
    display();
    std::cout << "\n";

    int pos;
    std::cin >> pos;
    std::cin >> data;

    insertAtMiddle(data, pos);
    std::cout << "Insert at position " << pos << ": ";
    display();
    std::cout << "\n";
    head = NULL;
  }
  return 0;
}