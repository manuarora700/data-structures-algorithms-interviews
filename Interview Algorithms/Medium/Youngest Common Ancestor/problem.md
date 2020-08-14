## Youngest Common Ancestor

#### Problem Statement

You're given three inputs, all of which are instances of a class that have an "ancestor" property pointing to their youngest ancestor. The rst input is the top
ancestor in an ancestral tree (i.e., the only instance that has no ancestor), and the other two inputs are descendants in the ancestral tree. Write a function that
returns the youngest common ancestor to the two descendants.

Sample input: Node A, Node E, Node I (from the ancestral tree below)
A
/ \
 B C
/ \ / \
 D E F G
/ \
 H I
