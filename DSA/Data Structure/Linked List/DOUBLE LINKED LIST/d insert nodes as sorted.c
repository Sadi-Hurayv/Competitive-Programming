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

int main()
{
    int i, N, item;
    printf("Insert a node randomly and the program will put it as sorted at the LINKED LIST!!!!!\n");
    scanf("%d",&N,printf("Number of item in the linked list : "));
    if(N==0)
    {
        printf("There is no item to input!!!!\n");
    }
    else
    {
        printf("Input the item(s) : \n");
        for(i=0; i<N; i++)
        {
            scanf("%d",&item);
            insert_node(item);

        }
    }

    print_ll();


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
        for(temp=head; temp && temp->data>item; temp=temp->right);
        if(temp==head )
        {
//            printf("A\n");
            newnode->right=head;
            head->left=newnode;
            head=newnode;
        }
        else if(temp==NULL)
        {
//            printf("B\n");
            newnode->left=tail;
            tail->right=newnode;
            tail=newnode;
        }
        else
        {
//            printf("C\n");
            temp->left->right=newnode;
            newnode->left=temp->left;
            newnode->right=temp;
            temp->left=newnode;
        }
    }
//    print_ll();
}

///by using sll logic. but not yet ready. have to add tail logic and end insert.
//void insert_node(int item)
//{
//
//    struct node *temp=(struct node*)malloc(sizeof(struct node));
//    struct node *curr, *prev;
//    temp->data=item;
//    temp->right=NULL;
//    temp->left=NULL;
//
//    if(head==NULL)
//    {
//        head=temp;
//    }
//    else
//    {
//        for(curr=head,prev=head ; curr && curr->data > item; prev=curr,curr=curr->right);
//        if(curr==prev)
//        {
//            head->left=temp;///
//            temp->right=head;
//            head=temp;
//        }
//        else
//        {
//            temp->right=prev->right;///equivalent to temp->right=curr;
//            curr->left=temp;///
//            prev->right=temp;
//            temp->left=prev;///
//        }
//
//    }
//}










