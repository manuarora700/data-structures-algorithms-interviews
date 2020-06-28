Journey of Bablu and Dablu
Bablu and Dablu are traveling at train. This time they are traveling without their parents. Bablu wants to know the arrangement of seats inside the train coach.
The entire coach could be viewed as an arrangement of consecutive blocks of size 
8
.

Berth Number   Compartment
1 -  8    1
9 - 16    2
17 - 24    3
... and so on
Each of these size-
8
 blocks are further arranged as:
1
L
B
,
2
M
B
,
3
U
B
,
4
L
B
,
5
M
B
,
6
U
B
,
7
S
L
,
8
S
U
,
9
L
B
,
10
M
B
,
.
.
.
.
.
.

Here LB denotes lower berth, MB middle berth, and UB upper berth.

The following berths are called Train-Partners:
7SL |  8SU
3UB |  6UB 
2MB |  5MB
1LB |  4LB
and the pattern is repeated for every set of 
8
 berths.
Bablu and Dablu are playing a game of finding the train partner of each berth. But they are not able to find the right partner, they ask for help.

Input Format
The first line of input contains a single integer 
T
, denoting the number of test cases to follow.
Each of the next 
T
 lines contains a single integer 
N
, the berth number whose neighbor is to be found out.

Output Format
The output should contain exactly 
T
 lines each containing the berth of the neighbor of the corresponding seat.

Constraints
1
≤
T
≤
10
6

1
≤
N
≤
10
6

Time Limit
1
 second

Example
Input
4
3
5 
1 
8

Output
6UB
2MB
4LB
7SL