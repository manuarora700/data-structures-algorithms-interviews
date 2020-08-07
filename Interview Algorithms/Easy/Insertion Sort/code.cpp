// Time: O(n^2) | Space: O(1)
#include <bits/stdc++.h>

using namespace std;

vector<int> insertionSort(vector<int> array)
{
    for (int i = 0; i < array.size(); i++)
    {
        for (int j = i; j >= 1; j--)
        {
            if (array[j] < array[j - 1])
            {
                swap(array[j], array[j - 1]);
            }
        }
    }

    for (int i = 0; i < array.size(); i++)
    {
        cout << array[i] << " ";
    }
}

int main()
{
    vector<int> array{9, 8, 7, 65, 34, 543, 3, 5, 6, 4};
    insertionSort(array);
}