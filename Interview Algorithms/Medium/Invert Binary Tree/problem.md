## Invert Binary Tree

#### Problem Statement

Write a function that takes in a Binary Tree and inverts it. In other words, the
function should swap every left node in the tree for its corresponding
(mirrored) right node. Each Binary Tree node has a value stored in a property
called "value" and two children nodes stored in properties called "left" and
"right," respectively. Children nodes can either be Binary Tree nodes themselves
or the None (null) value.
Sample input:
1
/ \
 2 3
/ \ / \
 4 5 6 7
/ \
 8 9
Sample output:
1
/ \
 3 2
/ \ / \
 7 6 5 4
/ \
 9 8
