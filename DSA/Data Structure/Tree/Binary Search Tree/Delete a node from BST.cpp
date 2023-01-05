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
    BstNode* newNode = new BstNode();
    newNode->data=data;
    newNode->left=newNode->right=NULL;
    return newNode;
}

BstNode* insert(BstNode* root, int data)
{
    if(root==NULL)
    {
        root=getNewNode(data);
    }
    else if(data<=root->data)
    {
        root->left=insert(root->left, data);
    }
    else if(data>root->data)
    {
        root->right=insert(root->right, data);
    }
    return root;
}

void in_Order(BstNode* root)
{
    if(root==NULL)
    {
        cout << "Error: Tree is empty!!!" ;
        return;
    }

    if(root->left!=NULL)
    {
        in_Order(root->left);
    }

    cout << root->data << " ";

    if(root->right!=NULL)
    {
        in_Order(root->right);
    }
}

BstNode* Min(BstNode* root)
{
    if(root->left==NULL)
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
    if(root->right==NULL)
    {
        return root;
    }
    else
    {
        return Max(root->right);
    }
}

BstNode* Delete(BstNode* root, int data)
{
    if(root==NULL)
    {
        return root;
    }
    else if(data < root->data)
    {
        root->left = Delete(root->left, data);
    }
    else if(data > root->data)
    {
        root->right = Delete(root->right, data);
    }
    else if(root->data == data)
    {
        if(root->left==NULL && root->right==NULL)///No child.
        {
            delete root;
            root=NULL;
        }
        else if(root->left==NULL)///One child
        {
            BstNode* temp=root;
            root=root->right;
            delete temp;
        }
        else if(root->right==NULL)///One child
        {
            BstNode* temp=root;
            root=root->left;
            delete temp;
        }
        else///Two child
        {
            BstNode* temp=Min(root->right);
            root->data=temp->data;
            root->right=Delete(root->right, temp->data);

//            BstNode* temp=Max(root->left)
//            root->data=temp->data;
//            root->left=Delete(root->left, temp->data);
        }
    }
    return root;
}

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

    cout << "In_order: ";
    in_Order(root);
    cout << endl;
    cout << root->data << endl;

    cout << "Enter a number to delete: ";
    cin >> tmp;

    root=Delete(root, tmp);

    cout << "In_order: ";
    in_Order(root);
    cout << endl;

    cout << root->data << endl;

    return 0;
}
