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

TreeNode* insert(TreeNode* root, int value)
{
    //empty
   
    try{
    if (root == nullptr)
    {
        root = new TreeNode(value);
        root ->left = nullptr;
        root -> right = nullptr;
        return root;
    }
    }
   
   catch( std::invalid_argument& e)
   {
        cout <<"Duplicates not allowed"<<e.what();
   }



    //not empty
   
        //smaller than value
        if(value < root ->value)
        {
            root -> left = insert(root-> left, value);
            return root;
        }

        //larger than value
        else if (value > root -> value)
        {
            root -> right = insert(root-> right, value );
            return root;
        }

        else
        {
            throw("ERROR");
        }
    
}


void insert_(TreeNode*& root, int value)
{
    //empty
   
    try{
    if (root == nullptr)
    {
        root = new TreeNode(value);
        root ->left = nullptr;
        root -> right = nullptr;
        return;
    }
    }
   
   catch( std::invalid_argument& e)
   {
        cout <<"Duplicates not allowed"<<e.what();
   }



    //not empty
   
        //smaller than value
        if(value < root ->value)
        {
            insert_(root-> left, value);
            return;
        }

        //larger than value
        else if (value > root -> value)
        {
            insert_(root-> right, value );
            return;
        }

        else
        {
            throw("ERROR");
        }
    
}
