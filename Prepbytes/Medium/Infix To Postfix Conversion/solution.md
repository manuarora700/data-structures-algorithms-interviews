Follow the algorithm which uses Stack

1. Create a stack.
2. For each element in the input
   if(t is an operand)
   Output t;
   else if (t is a right parenthesis)
   Pop and print tokens until a left parenthesis is popped.
   else // if t is an operator or a left parenthesis
   pop and output tokens until one of lower priority than t is encountered or stack is empty
3. Pop and output tokens until stack is empty
