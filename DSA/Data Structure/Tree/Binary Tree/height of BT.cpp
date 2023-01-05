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

int findHeight(BstNode* root)
{
    int rightHeight, leftHeight;
    if(root==NULL)
    {
        return -1;
    }
    leftHeight=findHeight(root->left);
    rightHeight=findHeight(root->right);
    return max(leftHeight, rightHeight)+1;
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

    cout << "Height of BT is: " << findHeight(root) << endl;

    return 0;
}

