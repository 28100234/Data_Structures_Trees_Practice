
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

void levelOrderTraversal(TreeNode* root)
{
    std::queue<TreeNode*> myQueue;
    if (root == nullptr) //dont forget to keep checks
    {
        return;
    }
    myQueue.push(root);

    while(myQueue.empty() != true)   //  pop -> cout  -> push children
    {
        TreeNode* cur = myQueue.front();
        myQueue.pop();
        cout << cur->value;
        if (cur -> left != nullptr)
        myQueue.push(cur->left);

        if (cur -> right != nullptr)
        myQueue.push(cur->right);

    }
}



