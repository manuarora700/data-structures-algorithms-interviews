#include <bits/stdc++.h>

using namespace std;

int parent(int i)
{
  return (i - 1) / 2;
}

int left(int i)
{
  return 2 * i + 1;
}

int right(int i)
{
  return 2 * i + 2;
}

void insert(int heap[], int i, int val)
{
  heap[i] = val;
  while (i != 0 && heap[parent(i)] > heap[i])
  {
    swap(heap[parent(i)], heap[i]);
    i = parent(i);
  }
}

void print_heap(int heap[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << heap[i] << " ";
  }

  cout << endl;
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    int heap[n];
    int ele;
    for (int i = 0; i < n; i++)
    {
      cin >> ele;
      insert(heap, i, ele);
    }
    print_heap(heap, n);
  }

  return 0;
}