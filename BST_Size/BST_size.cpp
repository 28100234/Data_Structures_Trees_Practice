#include <iostream>
using namespace std;



struct TreeNode
{
    int value;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : value(0), left(nullptr), right(nullptr) {}
    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

int size(TreeNode* root)
{
    if (root == nullptr)
    return 0;


    return 1 + size(root->left) + size(root->right);
}
