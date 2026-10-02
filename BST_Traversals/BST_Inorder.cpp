#include <iostream>
using namespace std;



struct TreeNode
{
    int value;
    TreeNode *left;
    TreeNode *right;
    TreeNode(){}
    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

void inorderTraversal(TreeNode* root)
{
    if(root == nullptr)
    {
        return;
    }

    inorderTraversal(root -> left);
    std::cout<< root->value;
    inorderTraversal(root -> right);

}
