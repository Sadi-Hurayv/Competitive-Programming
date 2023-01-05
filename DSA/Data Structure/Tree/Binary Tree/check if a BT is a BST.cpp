#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

Node* getNewNode(int data)
{
    Node* newNode= new Node();
    newNode->data = data;
    newNode->left=newNode->right=NULL;
    return newNode;
}

Node* insert(Node* root, int data)
{
    if(root==NULL)
    {
        root=getNewNode(data);
        return root;
    }
    std::queue<Node*>Q;
    Q.push(root);
    while(!Q.empty())
    {
        Node* current=Q.front();
        if(current->left==NULL)
        {
            current->left=getNewNode(data);
            break;
        }
        else
        {
            Q.push(current->left);
        }
        if(current->right==NULL)
        {
            current->right=getNewNode(data);
            break;
        }
        else
        {
            Q.push(current->right);
        }
        Q.pop();
    }
    return root;
}

bool BSTUtil(Node* root, int minvalue, int maxvalue)
{
    if(root==NULL)
    {
        return true;
    }

    if(((root->data) > minvalue) && ((root->data) <  maxvalue) && BSTUtil(root->left, minvalue, root->data) && BSTUtil(root->right, root->data, maxvalue))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool IsBinarySearchTree(Node* root)
{
    return BSTUtil(root, INT_MIN, INT_MAX);
}

void in_Order(Node* root)
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

int main()
{
    int n, tmp;
    Node* root=NULL;
    cout << "Number of items to be inserted in BT: ";
    cin >> n;
    cout << "Please insert the number(s):" << endl;
    for(int i=0; i<n; i++)
    {
        cin >> tmp;
        root=insert(root, tmp);
    }

    cout << "In_order: ";
    in_Order(root);
    cout << endl;



    cout << "\nThe BT is "  ;
    if(IsBinarySearchTree(root))
    {
        cout << "also a BST!!!" << endl;
    }
    else
    {
        cout << "not a BST!!!" << endl;
    }
    return 0;
}
