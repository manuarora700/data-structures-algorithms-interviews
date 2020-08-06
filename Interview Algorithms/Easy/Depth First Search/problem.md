## Depth First Search

#### Problem Statement

You are given a Node class that has a name and an array of optional children Nodes. When put together, Nodes form a simple tree-like structure. Implement the
depthFirstSearch method on the Node class, which takes in an empty array, traverses the tree using the Depth-rst Search approach (specically navigating the
tree from left to right), stores all the of the Nodes' names in the input array, and returns it.

Sample input:
A
/ | \
 B C D
/ \ / \
 E F G H
/ \ \
 I J K
Sample output: ["A","B","E","F","I","J","C","D","G","K","H"]

#### Explanation

We can use a Stack here

#### Solution

Check this [Python](../python/Depth_First_Search.py) code.
