#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;

void insert_node(int item);
void print_ll(void);
void count_ll(void);

int main()
{
    int i, N, item;
    printf("Insert a node randomly and the program will put it as sorted at the LINKED LIST!!!!!\n");
    scanf("%d",&N,printf("Number of item in the linked list : "));
    printf("Input the number(s) : ");
    for(i=0; i<N; i++)
    {
        scanf("%d",&item);
        insert_node(item);

    }
    print_ll();
    count_ll();
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

void print_ll(void)
{
    struct node *temp;
    printf("The linked list is");
    for(temp=head; temp; temp=temp->next)
    {
        printf(" %d",temp->data);         ///equivalent to for(temp=head; temp; printf(" %d",temp->data),temp=temp->next);
    }


    printf("\n");
}
void count_ll(void)
{
    int count=0;
    struct node *temp;
    for(temp=head; temp; temp=temp->next)
    {
        count++;
    }
    printf("The number of items in the linked list is %d\n",count);

}

