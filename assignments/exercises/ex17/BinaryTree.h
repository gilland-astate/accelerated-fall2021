#pragma once

#include "TreeNode.h"
#include <iostream>

class BinaryTree {
    private:
        TreeNode* root = nullptr;
    public:
        void addItem(int payload);
        TreeNode search(int target);
        void inOrdeTrav(ofstream& output);
}