#include <bits/stdc++.h>

using namespace std;
int size;
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

void print_heap(int heap[])
{
  for (int i = 0; i < size; i++)
  {
    cout << heap[i] << " ";
  }
  cout << endl;
}

int extractMin(int heap[])
{
  int root = heap[0];
  heap[0] = heap[size - 1];
  size--;
  heapify_down(heap, size, 0);
  return root;
}

void decreaseKey(int heap[], int i, int val)
{
  heap[i] = val;
  while (i != 0 && heap[parent(i)] > heap[i])
  {
    swap(heap[parent(i)], heap[i]);
    i = parent(i);
  }
}

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

    build_heap(heap, n);
    cout << extractMin(heap) << "\n";
    print_heap(heap);

    decreaseKey(heap, 4, -1);
    cout << "Print heap after decreasekey : \n";
    print_heap(heap);
  }

  return 0;
}