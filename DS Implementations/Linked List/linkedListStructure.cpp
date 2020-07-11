#include <bits/stdc++.h>

// Node structure which holds data and next pointer
struct node
{
  int data;
  struct node *next;
}

main()
{
  // initialize Linked List
  struct node *head = null;

  // Create list function to create linked list
  head = create_list(head);
  return;
}

// method to create ll
struct node *create_list(struct node *head)
{
  struct node *newNode, *tail;

  tail = head; // ALso keep track of tail for o(1) insertion at the end.

  // Dummy insertions
  for (int i = 0; i <= 3; i++)
  {
    newNode = (struct node *)malloc(sizeof(struct node)); //allocate memory for new node for each node.

    if (!newNode)
    {
      printf("Memory erryr");
      return head;
    }

    // Begin inserting Data
    newNode->data = i;
    newNode->next = null;

    // if its the first insertion then point head and tail to newnode
    if (head == null)
    {
      head = newNode;
      tail = newNode;
    }
    // Else insert at the last
    else
    {
      tail->next = newNode;
      tail = newNode;
    }
    return head;
  }
}