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

void level_Order(Node* root)
{
    if(root==NULL)
    {
        cout << "Tree is empty!!!" << endl;
        return;
    }
    std::queue<Node*>Q;
    Q.push(root);
    while(!Q.empty())
    {
        Node* current=Q.front();
        cout << current->data << " ";
        if(current->left!=NULL)
        {
            Q.push(current->left);
        }
        if(current->right!=NULL)
        {
            Q.push(current->right);
        }
        Q.pop();
    }
    cout << endl;
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
    cout << "Here is the level order traversal of BT: "  ;
    level_Order(root);
    return 0;
}
