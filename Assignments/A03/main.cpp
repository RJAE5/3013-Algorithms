/*****************************************************************************
*
*  Author:           Rykir Evans
*  Email:            rjevans0408@my.msutexas.edu | rykirjoe@yahoo.com
*  Title:            BST Delete Method
*  Course:           CMPS 3013 Algorithms
*  Professor:        Terry Griffin
*  Semester:         Spring 2025
*
*  Description:
*         This program contains the binary search tree (BST) that we created
*         in class on 1-27-2025 with an additional delete method that was added
*         as an assignment. The delete method takes into consideration the 3 
*         cases that can occur when deleting from a BST: 0, 1, or 2 children.
*
*  Usage:
*         You may tweak the values being inserted/deleted from the tree in 
*         `main` and compile and run the program to see the values displayed
*
*  Files: 
*         main.cpp
*******************************************************************************/


// // // // // // // // // // // // // // // // // // // // // // // //
// Following code was provided, I simply added on the commented methods
// // // // // // // // // // // // // // // // // // // // // // // //

#include <iostream>

using namespace std;

// Node data structure
struct Node {
  int data;
  Node *left;
  Node *right;

  Node(int x) {
    data = x;
    left = right = nullptr;
  }
};

class Bst {
private:
  Node *root;


  void _insert(Node *&sub_root, int x) {
    if (sub_root == nullptr) {
      sub_root = new Node(x);
    } else {
      if (x < sub_root->data) {
        _insert(sub_root->left, x);
      } else {
        _insert(sub_root->right, x);
      }
    }
  }

  void _print(Node *root) {
    if (!root) {
      return;
    }
    _print(root->right);
    cout << root->data << " ";
    _print(root->left);
  }

    /*
    * Private : _delete
    *
    * Description:
    *      Locate the node to be deleted, then, based on whichever case the
    *      node falls into in terms of children, it will properly reorganize
    *      the tree so that it is still valid after node deletion using
    *      recursion.
    *
    * Params:
    *     Node* root - The head of the tree/subtree
    *     int x      - The value to be deleted
    *
    * Returns:
    *     Node*      - The head of the new subtree
    */
  Node* _delete(Node* root, int x) {
    // Base case fore empty tree
    if (root == nullptr) {
      return root;
    }

    // Traverse the tree to find the node to delete
    if (x < root->data) {
      // Left subtree
      root->left = _delete(root->left, x);
    }
    else if (x > root->data) {
      // Right subtree
      root->right = _delete(root->right, x);
    } 
    else {
      // Node to be deleted has been found

      // Case 1: Node has no children (leaf node)
      if (root->left == nullptr && root->right == nullptr) {
        delete root;
        root = nullptr;
      }

      // Case 2: Node has one child
      else if (root->left == nullptr) {
        // The only existing child is to the right
        Node* temp = root;
        root = root->right;
        delete temp;
      } 
      else if (root->right == nullptr) {
        // The only existing child is to the left
        Node* temp = root;
        root = root->left;
        delete temp;
      }

      // Case 3: Node has two children
      else {
        Node* temp = _findMin(root->right); // Find the minimum in the right subtree
        root->data = temp->data;
        root->right = _delete(root->right, temp->data);
      }
    }
    return root;
  }


    /*
    * Private : _findMin
    *
    * Description:
    *      Determine the smallest node within a given subtree.
    *
    * Params:
    *     Node* root - The head of the tree/subtree
    *
    * Returns:
    *     Node*      - The node with the smallest value in the tree
    */
  Node* _findMin(Node* root) {
    while (root && root->left != nullptr) {
      root = root->left;
    }
    return root;
  }

public:
  Bst() { root = nullptr; }

  void insert(int x) {
    _insert(root, x);
  }

  void deleteNode(int x) {
    root = _delete(root, x);
  }

  bool search() { return 0; }

  void print() { _print(root); }
};

int main() {
  //std::cout << "Hello World!\n";
  Bst tree;
  tree.insert(8);
  tree.insert(3);
  tree.insert(1);
  tree.insert(11);
  tree.insert(7);
  tree.insert(15);
  tree.insert(16);
  tree.insert(2);
  
  tree.print();
  cout << endl;

  // Delete 3, which has 2 children
  tree.deleteNode(3); 
  tree.print();
  cout << endl;

  // Delete 16, which has 0 children
  tree.deleteNode(16);
  tree.print();
  cout << endl;

  // Delete 7, which now has 1 child after deletion of 3
  tree.deleteNode(7);
  tree.print();
  cout << endl;

  // Delete 8, which is the head of the tree
  tree.deleteNode(8);
  tree.print(); 
  cout << endl;

  return 0;
}
