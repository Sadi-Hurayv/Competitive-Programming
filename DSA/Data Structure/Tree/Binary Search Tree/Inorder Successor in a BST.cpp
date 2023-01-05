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

BstNode* Find(BstNode* root, int data)
{
    if(root==NULL)
    {
        return NULL;
    }
    else if(root->data==data)
    {
        return root;
    }
    else if(data<root->data)
    {
        return Find(root->left, data);
    }
    else if(data>root->data)
    {
        return Find(root->right, data);
    }
}

BstNode* getSuccessor(BstNode* root, int data)
{
    BstNode* current = Find(root, data);
    if(current==NULL)
    {
        return NULL;
    }
    else if(current->right!=NULL)///case: If Node has right subtree
    {
        BstNode* temp=current->right;
        while(temp->left!=NULL)
        {
            temp=temp->left;
        }
        return temp;
    }
    else if(current->right==NULL)///case: If node has no right subtree
    {
        BstNode* successor=NULL;
        BstNode* ancestor=root;
        while(ancestor!=current)
        {
            if(current->data < ancestor->data)
            {
                successor=ancestor;
                ancestor=ancestor->left;
            }
            else if(current->data > ancestor->data)
            {
                ancestor=ancestor->right;
            }
        }
        return successor;
    }
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


    cout << "Enter a number to get it's successor: ";
    cin >> tmp;
    BstNode* SUCCESSOR=getSuccessor(root, tmp);
    if(SUCCESSOR!=NULL)
    {
        cout << "The successor of " << tmp << " is " << SUCCESSOR->data << "!!!" << endl;
    }
    else
    {
        cout << tmp << " has no successor!!!" << endl;
    }
    return 0;
}


