## Breadth first Search

#### Problem Statement

You are given a Node class that has a name and an array of optional children Nodes. When put together,
Nodes form a simple tree-like structure. Implement the breadthFirstSearch method on the Node class,
which takes in an empty array, traverses the tree using the Breadth-rst Search approach (specically
navigating the tree from left to right), stores all of the Nodes' names in the input array, and returns it.
Sample input:
A
/ | \
 B C D
/ \ / \
 E F G H
/ \ \
 I J K
Sample output: ["A","B","C","D","E","F","G","H","I","J","K"]
