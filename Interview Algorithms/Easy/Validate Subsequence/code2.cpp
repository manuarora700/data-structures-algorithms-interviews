#include <bits/stdc++.h>
// Same solution but with for loop
int validateSubsequence(int arr[], int subsequence[], int arrSize, int seqSize);
int main()
{
	int arrSize = 8, seqSize = 4;
	int arr[] = {5, 1, 22, 25, 6, -1, 8, 10};
	int subsequence[] = {1, 6, -1, 10};

	validateSubsequence(arr, subsequence, arrSize, seqSize);
}

int validateSubsequence(int arr[], int subsequence[], int arrSize, int seqSize)
{
	int arrIdx = 0;
	int seqIdx = 0;

	for (int i = 0; i < arrSize; i++)
	{
		if (seqIdx == seqSize)
			break;
		if (subsequence[seqIdx] == arr[i])
		{
			seqIdx++;
		}
	}
	// Valid subsequence if seqIdx == seqSize

	return seqIdx == seqSize;
}