
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
    if (root == nullptr)
    return nullptr;     // never forget the safety line

    if (root ->right == nullptr)
    {
        return root;
    }

   // root ->right = findMax(root -> right);  //root ->right is not needed- its only needed when you're modifying the tree

    return findMax(root ->right);
}
