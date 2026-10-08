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

int height(TreeNode* root)
{
    if (root == nullptr)
    {
        return -1;

    }

    return max(height(root->left), height(root->right));
}


