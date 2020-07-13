#include <bits/stdc++.h>

using namespace std;

struct node
{
  int data;
  struct node *next;
  struct node *prev;
};

bool floydCycle(struct node *head)
{
  node *slow = head, *fast = head;

  while (slow != nullptr && fast != nullptr && fast->next != nullptr)
  {
    slow = slow->next;
    fast = fast->next->next;
    if (slow == fast)
      return true;
  }
  return false;
}