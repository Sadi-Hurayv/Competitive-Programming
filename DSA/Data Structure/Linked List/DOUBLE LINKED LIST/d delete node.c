#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    struct node *left;
    int data;
    struct node *right;
};
struct node *head=NULL;
struct node *tail=NULL;

void insert_node();
void print_ll();
void delete_ll();


int main()
{
    int i, N, item, del;
    printf("Insert a node randomly and the program will put it as sorted at the LINKED LIST!!!!!\n");
    scanf("%d",&N,printf("Number of item in the linked list : "));
    if(N==0)
    {
        printf("There is no item to input and delete!!!!\n");
    }
    else
    {
        printf("Input the item(s) : \n");
        for(i=0; i<N; i++)
        {
            scanf("%d",&item);
            insert_node(item);
        }
        print_ll();

        scanf("%d",&del,printf("Enter the item you want to delete : "));
        delete_ll(del);

    }



    return 0;
}


void print_ll(void)
{
    struct node *temp;
    if(head==NULL)
    {
        printf("There is no item to print!!!!\n");
    }
    else
    {
         printf("The linked list is");
         for(temp=head; temp; temp=temp->right)
         {
             printf(" %d",temp->data);
         }
         printf("\n");
    }

}

void insert_node(int item)
{
    struct node *temp;
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    if(!newnode)
    {
        printf("ALOCATION ISSUE!!!!");
        return;
    }
    newnode->right=NULL;
    newnode->left=NULL;
    newnode->data=item;
    if(head==NULL)
    {
        head=tail=newnode;
    }
    else
    {
        for(temp=head; temp && temp->data<item; temp=temp->right);
        if(temp==head )
        {
            newnode->right=head;
            head->left=newnode;
            head=newnode;
        }
        else if(temp==NULL)
        {
            newnode->left=tail;
            tail->right=newnode;
            tail=newnode;
        }
        else
        {
            temp->left->right=newnode;
            newnode->left=temp->left;
            newnode->right=temp;
            temp->left=newnode;
        }
    }
}

void delete_ll(int del)
{
    struct node *temp;
    int flag=0;
    for(temp=head; temp; temp=temp->right)
    {
        if(temp->data==del)
        {
            flag=1;
            if(temp==head)
            {
                head=temp->right;
            }
            else
            {
                temp->left->right=temp->right;
                temp->right->left=temp->left;
            }
            break;
        }

    }
    if(flag==0)
    {
        printf("Item could not found to delete!!!\n");
    }
    else
    {
        printf("After deletion :- \n");
        print_ll();
    }

}
