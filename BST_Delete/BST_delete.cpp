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






TreeNode* deleteNode(TreeNode* root, int value)
{
    //search

    
    if (root == nullptr)
    return nullptr;

    if (root->value < value)
    {
        root -> left = deleteNode(root->left, value);
    }

    else if (root -> value > value)
    {
        root -> right = deleteNode(root->right, value);
    }

    else if (root -> value == value)
    {

    //delete

    // no child
    if (root -> left == nullptr && root -> right == nullptr)
    {
        delete root;
        return nullptr;
    }

    //one child
    else if (root -> left == nullptr)
    {
        TreeNode* temp = root -> right;
        delete root;
        return temp;
    }
    else if (root -> right == nullptr)
    {
        TreeNode* temp = root -> left;
        delete root;
        return temp;
    }


    //2 children
    else
    {
         //predescessor -left and then extreme right
        TreeNode* temp = root ->left;  // will not be nullptr because if nullptr then already handled in single child case
        while(temp -> right != nullptr)
        {
            temp = temp -> right;
        }
        root = temp;
        delete temp;
        return root;

         //successor

        // TreeNode* temp = root ->right;  // will not be nullptr because if nullptr then already handled in single child case
        // while(temp -> left != nullptr)
        // {
        //     temp = temp -> left;
        // }
        // root = temp;
        // delete temp;
        // return root;
    }
    }

    else
    {
        cout << "Value doesnt exist in the tree :(";
    }

}