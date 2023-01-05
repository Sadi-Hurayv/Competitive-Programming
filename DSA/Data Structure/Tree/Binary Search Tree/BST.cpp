#include<bits/stdc++.h>
using namespace std;

struct BstNode
{
    int data;
    BstNode* left;
    BstNode* right;
};

BstNode* insert(BstNode* root, int data);
BstNode* getNewNode(int data);
bool search(BstNode* root, int data);

int main()
{
    int n, tmp;
    BstNode *root = NULL;
    cout << "Number of items to be inserted in BST: ";
    cin >> n;
    cout << "Please insert the number(s):" << endl;
    for(int i=0; i<n; i++)
    {
        cin >> tmp;
        root = insert(root, tmp);
    }

    cout << "Enter the number to be searched: ";
    cin >> tmp;
    if(search(root,tmp)==true)
    {
        cout << "Number found!!!" << endl;
    }
    else
    {
        cout << "Number not found!!" << endl;
    }

    return 0;
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

BstNode* getNewNode(int data)
{
    BstNode* newNode = new BstNode();
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

bool search(BstNode* root, int data)
{
    if(root==NULL)
    {
        return false;
    }
    else if(root->data==data)
    {
        return true;
    }
    else if(data<=root->data)
    {
        return search(root->left, data);
    }
    else if(data>root->data)
    {
        return search(root->right, data);
    }
}
