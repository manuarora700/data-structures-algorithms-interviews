#include <bits/stdc++.h>
using namespace std;

// Structure of node Just like node class
class SllNode
{
public:
  int data;
  SllNode *next;

  SllNode(int data)
  {
    this->data = data;
    this->next = nullptr;
  }
};

// Structure of Singly linked list - just like LinkedList class which contains all the methods

class Sll
{
public:
  SllNode *head;
  Sll()
  {
    this->head = nullptr;
  }

  void insertAtBeg(int data)
  {
    SllNode *newNode = new SllNode(data);
    if (head == nullptr)
    {
      head = newNode;
    }
    else
    {
      newNode->next = head;
      head = newNode;
    }
  }
  void insertAtEnd(int data)
  {
    SllNode *newNode = new SllNode(data);
    SllNode *temp = head;
    if (temp == nullptr)
    {
      head = newNode;
    }
    else
    {
      while (temp->next != nullptr)
      {
        temp = temp->next;
      }
      temp->next = newNode;
    }
  }
  void insertAtPosition(int data, int pos)
  {
    SllNode *newNode = new SllNode(data);
    SllNode *temp = head;
    if (temp == nullptr)
    {
      head = newNode;
    }
    else
    {
      int count = 1;
      while (count < pos)
      {
        count++;
        temp = temp->next;
      }
      newNode->next = temp->next;
      temp->next = newNode;
    }
  }
};

void display(SllNode *head)
{
  SllNode *temp = head;
  while (temp != NULL)
  {
    std::cout << temp->data << " ";
    temp = temp->next;
  }
  std::cout << "\n";
}

int main()
{
  int t;
  std::cin >> t;

  while (t--)
  {
    Sll *llist = new Sll();
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
      int data;
      std::cin >> data;

      llist->insertAtBeg(data);
    }
    std::cout << "Linked list after insert at beg: ";
    display(llist->head);

    Sll *slist = new Sll();

    for (int i = 0; i < n; i++)
    {
      int data;
      std::cin >> data;

      slist->insertAtEnd(data);
    }
    std::cout << "Linked list after insert at END: ";
    display(slist->head);

    int pos;
    cin >> pos;

    int data;
    std::cin >> data;

    std::cout << "Insert after POS in LLIST: ";

    llist->insertAtPosition(data, pos);
    display(llist->head);

    std::cout << "Insert after POS in SLIST: ";

    slist->insertAtPosition(data, pos);
    display(slist->head);
  }
}