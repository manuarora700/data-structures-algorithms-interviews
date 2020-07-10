Find the Window
You are given an array that is not completely sorted but sorting a window in this array can make the whole array sorted. That window could be a complete array as well. So, out of several such parts, you have to find the one with minimum length.

Input Format
The first line contains an integer
T
, number of test cases. Then follows
T
test cases. Each test case consists of two lines.
The first line contains
N
, size of the array.
The second line contains
N
space-separated positive integers
A
[
i
]
denoting elements of the array(
0
-based indexing).

Output Format
The output contains
T
lines, each line contains two space-separated integers denoting start and end index of the minimum length window.

Constraints
1
<=
T
<=
10

1
<=
N
<=
10
6

1
<=
A
[
i
]
<=
10
6

Time Limit
1 second

Example
Input
2
8
1 3 2 7 5 6 4 8
10
1 2 5 3 4 6 8 7 10 9

Output
1 6
2 9
