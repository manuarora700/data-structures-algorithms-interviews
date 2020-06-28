Approach 1: Naive approach

Use two for loops and traverse the array to find the pair which sum upto target
Time: O(n^2)
space: O(n)

Approach 2: Hash Tables

While traversing the array, check if targetNumber - currentNumber is present in the hash table;
If not, take the current element and push it into the hash table.
There will come a time when the x - y = targetNumber equation is satisfied

Time: O(n)
Space: O(n)

Approach 3: Two Pointer Approach

First sort the array, Thats O(n) time.
Then take two pointers, left and right
point left to the extreme left, right to the extreme right.

Now, check if left + right === targetNumber; if yes then return the number
If not, then check if left+right > targetNumber; if yes, do right-- because we want to decrease the sum and check again
else do left++;

Time: O(nlogn)
Space: O(1)
