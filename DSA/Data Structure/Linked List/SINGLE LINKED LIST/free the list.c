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
void free_ll(void);

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
    char ch;
    fflush(stdin);
    scanf("%c",&ch,printf("If you want to free linked list press F, otherwise press any character : "));
    if(ch=='F' || ch=='f')
    {
        for(i=0; i<N; i++)
        {
            free_ll();
        }
        printf("The linked list is free now.\n");
        print_ll();
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
         }
         printf("\n\n");
    }

}
void free_ll(void)
{
    struct node *temp;
    if(head==NULL)
    {
        printf("The list is already freed!!!\n");
    }
    else
    {
        temp=head;
        head=head->next;
        free(temp);
//        print_ll();
    }
}
