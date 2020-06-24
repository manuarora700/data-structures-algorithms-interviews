Approach: 1
First we use the slice method copy the string.
In order to get the last characters in str equivalent to the target's length we use the slice method.
The first parameter inside the slice method is the starting index and the second parameter would be the ending index.
For example str.slice(10, 17) would return give me.
In this case we only include one parameter which it will copy everything from the starting index.
We substract the length of str and the length of target, that way, we shall get the last remaining characters equivalent to the target's length.
Finally we compare the return result of slice to target and check if they have the same characters.


Approach: 2 REGEX
We need to make a pattern from the target variable that exists at the end of the string str.
Since we will use a variable that will change the pattern each time the function is called, we will use the constructor of the regular expression object new RegExp(pattern[, flags]), so we start with: new RegExp(target).
Then we have to check at the end of the string, so we concatenate to the target variable the $ character to match the end: new RegExp(target+'$').
We use the flag i to ignore the case of the pattern and we have our completed RegExp: new RegExp(target+'$','i'), or we can ommit the flag entirely.
Finally, we are using our regular expression with the test method to the given string, to check if the string ends with the pattern and return true or false accordingly.