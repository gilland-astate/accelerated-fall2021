#pragma once

class TreeNode {
    private:
        int payload;
        TreeNode* left = nullptr;
        TreeNode* right = nullptr;
    public:
        TreeNode(int payload) : payload{payload} {}
        void setLeft(TreeNode* node) { left = node; }
        void setRight(TreeNode* node) { right = node; }
        TreeNode* getLeft() { return left; }
        TreeNode* getRight() { return right; }
        int getPayload() { return payload; }
}