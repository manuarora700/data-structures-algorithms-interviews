#include <bits/stdc++.h>

using namespace std;

int parent(int i)
{
  return ((i - 1) / 2);
}

int left(int i)
{
  return (2 * i + 1);
}
int right(int i)
{
  return (2 * i + 2);
}

void heapify_down(int heap[], int n, int i)
{
  int l = left(i);
  int r = right(i);

  int s = i;
  if (l < n && heap[l] < heap[i])
    s = l;
  if (r < n && heap[r] < heap[s])
    s = r;

  if (s != i)
  {
    swap(heap[i], heap[s]);
    heapify_down(heap, n, s);
  }
}

void build_heap(int heap[], int n)
{
  for (int i = (n / 2 - 1); i >= 0; i--)
  {
    heapify_down(heap, n, i);
  }
}

void print_heap(int heap[], int n)
{
  for (int i = n - 1; i >= 0; i--)
  {
    cout << heap[i] << " ";
  }
  cout << endl;
}

void heap_sort(int heap[], int n)
{
  build_heap(heap, n);

  for (int i = n - 1; i > 0; i--)
  {
    swap(heap[0], heap[i]);
    heapify_down(heap, i, 0);
  }
}

int size;
int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    size = 0;
    int n;
    cin >> n;

    int heap[n];

    for (int i = 0; i < n; i++)
    {
      cin >> heap[i];
      size++;
    }

    heap_sort(heap, n);
    print_heap(heap, n);
  }

  return 0;
}