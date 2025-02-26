## 2-24-2025 AVL Trees
BSTs are bad unless they're balanced. 

AVL Trees are just self-balancing BSTs, and they were the first such to be invented.

Insertion is `O(log(n))`

AVL Trees track the `balance factor`, which is the height of a node's left subtree minus the height of it's right subtree. This is tracked for every node.

A node with a balance factor of 1, 0, or -1, it is considered balanced. Once the balance factor leaves this range, it requires rotation.

Usually a negative 2 is a left rotation, and a positive 2 is a right rotation.

### Insertions
Interting into an AVL Tree is the exact same as a BST, but then it recalculates the balance factor of the parent nodes. 

> n.b. Sometimes you will see `O(h)` which is a measure of the height and how bad it is. 

### Rotations
#### Right Rotation

```cpp
TreeNode *Temp;
Temp = SubRoot->left;
SubRoot->left = Temp->right;
Temp->right = SubRoot;
SubRoot = Temp;

ComputeAvlValues(Subroot);
```

#### Left Rotation

```cpp
TreeNode *Temp;
Temp = SubRoot->right;
SubRoot->right = Temp->left;
Temp->left = SubRoot;
SubRoot = Temp;

ComputeAvlValues(Subroot);
```

#### Double Rotations
Sometimes our rotation will not fully fix the balance factor. More technically, our left subtree is right heavy or vise versa.

In the event of a left subtree being right heavy, we do a left rotation of our left subtree and then a normal right rotation to balance the tree.

### AVL Tree Creation
1. Insert node
2. Compute balance factors of parents
3. Determine if BF's fall out of range, and then rotate if necessary
4. When going back up, multiple BF's might fall out of range, but it will be the bottom-most one that gets rotated.

### Deletion
Same as a BST, but you have to recalculate every Balance Factor.

### AVL Methods
* Height
* Single Balance Factor calculation
* Left & Right Heavy methods
* Rotate left and right
* Entire tree BF Calculation

