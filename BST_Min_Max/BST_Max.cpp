
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


TreeNode* findMax(TreeNode* root)
{
    
    if (root ->right == nullptr)
    {
        return root;
    }

    root ->right = findMax(root -> right);
}
