#include <bits/stdc++.h>

using namespace std;

class LinkedList
{
public:
  int value;
  LinkedList *next;

  LinkedList(int value);
};

// Time: O(n) | Space: O(1)

void removeKthNode(LinkedList *head, int k)
{
  int counter = 1;
  LinkedList *first = head;
  LinkedList *second = head;

  while (counter <= k)
  {
    second = second->next;
    counter++;
  }

  if (second == NULL)
  {
    head->value = head->next->value;
    head->next = head->next->next;
  }
  while (second->next != NULL)
  {
    second = second->next;
    first = first->next;
  }
  first->next = first->next->next;
}
