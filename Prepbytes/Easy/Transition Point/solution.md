This is done using Binary Search

The basic algorithm is this:

1. Check if the mid is 1; if yes then check if the immediate left is 0; if yes, then we have the first occurence of 1. return the index.
2. if the mid is 1 and the immediate left is not zero, we iterate on the left half and find i.e. recurse on the left half and repeat the process.
3. If the mid == 0, that means the one's are in the right half of the array, we recurse in the right half.
4. If start > end meaning there are no one's then simply return -1.
