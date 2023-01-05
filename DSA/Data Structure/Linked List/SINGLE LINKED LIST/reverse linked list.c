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
void search_ll(int ser, int n);
void reverse_ll();

int main()
{
    int i, N, item, ser_item;
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
    reverse_ll();
    printf("After reverse :- \n");
    print_ll();
//    printf("%u \t %d \t %u\n",head,head->data, head->next->next->data);

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
    if(head==NULL)
    {
        printf("There is no item to print!!!!\n");
    }
    else
    {
         printf("The linked list is");
         for(temp=head; temp; temp=temp->next)
         {
             printf(" %d",temp->data);
//             printf("%u \t %d\n",temp,temp->data);
         }
         printf("\n");
    }
}

void reverse_ll()
{

    struct node *temp, *rev, *var;
    temp=head;
    var=NULL;

    while(temp)
    {

        rev=var;
        var=temp;
        temp=temp->next;
        var->next=rev;

    }
    head=var;
}

