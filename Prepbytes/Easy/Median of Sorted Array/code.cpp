#include <bits/stdc++.h>
using namespace std;
/* Function to print an array */
void printArray(int arr[], int size)
{
  int i;
  for (i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}

void bubbleSort(int arr[], int length)
{
  for (int i = 0; i < length - 1; i++)
  {
    for (int j = 0; j < length - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        // swapping
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main()
{
  //write your code here
  int length;
  std::cin >> length;

  int arr[length];
  for (int i = 0; i < length; i++)
  {
    std::cin >> arr[i];
  }

  bubbleSort(arr, length);
  int median = arr[(length - 1) / 2];
  std::cout << median;
  // printArray(arr, length);
}