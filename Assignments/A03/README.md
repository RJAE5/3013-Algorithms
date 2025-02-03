## A03 - BST Delete Method
### Rykir Evans
### Description:

This program contains the binary search tree (BST) that we created in class on 1-27-2025 with an additional delete method 
that was added as a homework assignment. The delete method takes into consideration the following 3 cases:

### Case 1: No Children (Leaf Node)
In the first and most simple case, deleting a node that has no children (i.e. a leaf node), is as simple as locating the node to be deleted and freeing up the memory and disassociating the pointer of the deleted node.
1. Locate node to be deleted
2. Delete node and free up memory


### Case 2: One Child
When deleting a node with only one child, we have to take into consideration the potential loss of all of the data within the subtree. With this being the case, we must link the parent and child of the node to be deleted. From there, we will be free to delete the node and free up the pointer. In my program, this is accomplished by first determining which side the single child is on, and then creating a temporary node pointer equal to the address of the node to be deleted. Then, the root node is advanced to the single child before deleting the temporary node pointer and subsequently freeing up the node from the tree.
1. Locate node to be deleted
2. Link parent and child of this node to each other
3. Delete node and free up memory

### Case 3: Two Children
In the most complex and tricky case of a node with two children, we have to reorder the structure of one of the subtrees. The following may be accomplished with first finding the maximum value in the left subtree, or the minimum value in the right subtree. In my program, I utilize the method of finding the **smallest value in the right subtree** starting with the node to be deleted, and override the now-deleted value of the node with this preserved value. My program then recursively calls the delete method with the now-duplicated data to go delete the duplicate, which is a leaf node. This leaves the tree perfectly valid, but slightly restructured. 
1. Locate node `A` to be deleted
2. Find minimum value in the right subtree of this node,  `B`
3. Override the node `A`'s data with `B`'s value
4. Delete the `B` node and free up memory


### Files

|   #   | File                                                          | Description                                        |
| :---: | ------------------------------------------------------------- | -------------------------------------------------- |
|   1   | [main.cpp](./main.cpp)                                        | Program with improved BST                          |


### Instructions

1. (Optional) Tweak the values to be inserted/removed
2. Compile program with
```
g++ main.cpp -o main
```
3. Run the program with
```
./main
```
4. Observe the tree displayed in descending order, unfortunately, it will not be structured like a BST diagram.
