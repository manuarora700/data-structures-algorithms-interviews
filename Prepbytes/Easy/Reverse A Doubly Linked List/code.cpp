#include <bits/stdc++.h>

using namespace std;

struct node
{
  int data;
  struct node *next;
  struct node *prev;
};

void reverse(struct node **head)
{
  struct node *temp = NULL;

  struct node *current = *head;

  while (current != NULL)
  {
    temp = current->prev;
    current->prev = current->next;
    current->next = temp;
    current = current->prev;
  }

  if (temp != NULL)
  {
    *head = temp->prev;
  }
}