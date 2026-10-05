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

void preorderTraversal(TreeNode* root)
{
    if (root == nullptr)
    {
        return;
    }

    cout << root ->value << " ";
    preorderTraversal(root ->left);
    preorderTraversal(root-> right);

}