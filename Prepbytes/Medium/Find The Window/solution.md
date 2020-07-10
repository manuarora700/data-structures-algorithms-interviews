Approach: O(n) time

1. Take all the inputs
2. Traverse the array to find the 'start' index. if arr[i] > arr[i+1] then current index becomes our start index.
3. Similarly calculate end window index. if arr[i] < arr[i-1] then current becomes end index.
4. Now between start and end index, find min and max values. we do so because we need to find if there are any elements greater than the min element in the left side of the window; and if there are any elements greater than the max in right side of the window.
5. Now compare min with lhs of the window, if any element < min is found, this current index becomes the start index, same is for end index.
