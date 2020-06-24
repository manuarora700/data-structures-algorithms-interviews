Going by the question: We are only allowed to multiply by 2 and make it divisible by 10.
The trick here is that the number must be divisible by 5 first. If that is the case, then only we are going to get a number which is divisible by ten (Because we are only allowed to multiply the number by 2)

For example
Let's say x = 15

To make it divisible by 10
We check if it is divisible by 5 (i.e. 15 % 5 == 0 is true)
Then we check if it is divisible by 10, if yes then return count, if not then make 15 * 2 = new number.

Any other number which is not divisible by 5 will not be able to qualify because 5 * 2 = 10 and any other number
let's say 4 will never be divisible by 10
4 * 2 = 8
8 * 2 = 16
16 * 2 = 32 and so on..

3 * 2 = 6
6 * 2 = 12
12 * 2 = 24 and so on... 