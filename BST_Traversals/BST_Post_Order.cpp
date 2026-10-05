#include <iostream>
#include <queue>
using namespace std;



struct TreeNode
{
    int value;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : value(0), left(nullptr), right(nullptr) {}
    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

void postorderTraversal(TreeNode* root)
{
    if (root == nullptr)
    {
        return;
    }

    postorderTraversal(root -> left);
    postorderTraversal(root -> right);
    cout << root -> value;
}
