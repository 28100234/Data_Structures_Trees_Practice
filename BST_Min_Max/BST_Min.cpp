
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


TreeNode* findMin(TreeNode* root)
{
    if (root == nullptr)
    return nullptr;     // never forget the safety line

    if (root ->left == nullptr)
    {
        return root;
    }
    
    return findMin(root -> left);
}

