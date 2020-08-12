## BST Construction

#### Problem Statement

Write a Binary Search Tree (BST) class. The class should have a "value" property set to be an integer, as well as "left" and "right" properties, both of which should
point to either the None (null) value or to another BST. A node is said to be a BST node if and only if it satises the BST property: its value is strictly greater than
the values of every node to its left; its value is less than or equal to the values of every node to its right; and both of its children nodes are either BST nodes
themselves or None (null) values. The BST class should support insertion, searching, and removal of values. The removal method should only remove the rst
instance of the target value.

Sample input:
10
/ \
 5 15
/ \ / \
 2 5 13 22
/ \
 1 14
Sample output (after inserting 12):
10
/ \
 5 15
/ \ / \
 2 5 13 22
/ / \
 1 12 14
Sample output (after removing 10):
12
/ \
 5 15
