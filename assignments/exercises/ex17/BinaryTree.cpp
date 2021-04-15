#include "BinaryTree.h"

void BinaryTree::addItem(int payload) {
    TreeNode* newNode = new TreeNode{payload};

    if( root == nullptr )
        root = newNode;
    else {
        TreeNode* current = root;
        TreeNode* prev = current;

        while( current != nullptr ) {
            if( newNode.getPayload() > current.getPayload() )
            {
                prev = current;
                current = current->getRight();
            }
            else
            {
                prev = current;
                current = current->getRight();
            }
        }

        if( newNode.getPayload() > current.getPayload() )
            prev.setRight(newNode);
        else
            prev.setLeft(newNode);


    }
}


TreeNode BinaryTree::search(int target);