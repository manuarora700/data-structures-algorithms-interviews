1. O(n) approach

Traverse the array and calculate minDiff at each element. The one which gives the minimum difference is the answer.

2. O(logn) Binary search

Check the edge cases first.
Traverse right if the target is greater than the mid, traverse left if the target is lesser than the mid.

There's a catch here. We also check between arr[mid] and arr[mid-1] AND arr[mid] and arr[mid+1] to see if the element is present there.
