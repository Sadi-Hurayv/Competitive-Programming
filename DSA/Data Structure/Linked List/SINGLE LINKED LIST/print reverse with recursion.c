#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;

void insert_node(int item);
void print_ll();
void print_rev(struct node *temp);


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
        if(head==NULL)
        {
            printf("There is no item to print!!!!\n");
        }
        else
        {
            printf("The linked list is : ");
            print_ll(head);
            printf("\n");
            printf("The reverse print of linked list is : ");
            print_rev(head);
            printf("\n");
        }

    }


    return 0;
}

void insert_node(int item)
{

    struct node *temp=(struct node*)malloc(sizeof(struct node));
    struct node *curr, *prev;
    temp->data=item;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        for(curr=head,prev=head ; curr && curr->data > item; prev=curr,curr=curr->next);
        if(curr==prev)
        {
            temp->next=head;
            head=temp;
        }
        else
        {
            temp->next=prev->next;///equivalent to temp->next=curr;
            prev->next=temp;
        }

    }
}

void print_ll(struct node *temp)
{

    if(temp==NULL)
    {
        return;
    }
    else
    {
        printf("%d ",temp->data);///to print reverse print the data after calling recursion.
        print_ll(temp->next);
    }


}


void print_rev(struct node *temp)
{

    if(temp==NULL)
    {
        return;
    }
    else
    {
         print_rev(temp->next);
         printf("%d ",temp->data);///to print reverse print the data after calling recursion.
    }


}



