
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

int countLeaves(TreeNode* root)
{
    if (root == nullptr)
    return 0;

    if (root -> left == nullptr && root -> right == nullptr)
    {
        return 1 + countLeaves(root -> left) + countLeaves(root -> right);
    }

    return countLeaves(root ->left) + countLeaves(root ->right);

}