#include<bits/stdc++.h>
using namespace std;
struct BstNode
{
    int data;
    BstNode* left;
    BstNode* right;
};

BstNode* getNewNode(int data)
{
    BstNode* newNode=new BstNode();
    newNode->data=data;
    newNode->left=newNode->right=NULL;
    return newNode;
}

BstNode* insert(BstNode* root, int data)
{
    if(root == NULL)
    {
        root = getNewNode(data);
    }
    else if(data <= root->data)
    {
        root->left = insert(root->left, data);
    }
    else if(data > root->data)
    {
        root->right = insert(root->right, data);
    }
    return root;
}

BstNode* Min(BstNode* root)
{
    if(root==NULL)
    {
        cout << "Error: Tree is empty!!!!" << endl;
    }
    else if(root->left==NULL)
    {
        return root;
    }
    else
    {
        return Min(root->left);
    }
}

BstNode* Max(BstNode* root)
{
    if(root==NULL)
    {
        cout << "Error: Tree is empty!!!!" << endl;
    }
    else if(root->right == NULL)
    {
        return root;
    }
    else
    {
        return Max(root->right);
    }
}

int main()
{
    int n, tmp;
    BstNode* root=NULL;
    cout << "Number of items to be inserted in BST: ";
    cin >> n;
    cout << "Please insert the number(s):" << endl;
    for(int i=0; i<n; i++)
    {
        cin >> tmp;
        root = insert(root, tmp);
    }
    cout << "In BST minimum element is " << Min(root)->data << endl;
    cout << "In BST maximum element is " << Max(root)->data << endl;
    return 0;
}
