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

void pre_Order(Node* root)
{
    if(root==NULL)
    {
        cout << "Error: Tree is empty!!!" ;
        return;
    }

    cout << root->data << " ";
    if(root->left!=NULL)
    {
        pre_Order(root->left);
    }
    if(root->right!=NULL)
    {
        pre_Order(root->right);
    }

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

void post_Order(Node* root)
{
    if(root==NULL)
    {
        cout << "Error: Tree is empty!!!" ;
        return;
    }

    if(root->left!=NULL)
    {
        post_Order(root->left);
    }
    if(root->right!=NULL)
    {
        post_Order(root->right);
    }
    cout << root->data << " ";
}

int main()
{
    int n, tmp;
    Node* root=NULL;
    cout << "Number of items to be inserted in BST: ";
    cin >> n;
    cout << "Please insert the number(s):" << endl;
    for(int i=0; i<n; i++)
    {
        cin >> tmp;
        root=insert(root, tmp);
    }
    ///Pre_Order
    cout << "The Pre_order traversal of BT: "  ;
    pre_Order(root);
    cout << endl;

    ///IN_Order
    cout << "The In_order traversal of BT: "  ;
    in_Order(root);
    cout << endl;

    ///Post_Order
    cout << "The Post_order traversal of BT: "  ;
    post_Order(root);
    cout << endl;

    return 0;
}
