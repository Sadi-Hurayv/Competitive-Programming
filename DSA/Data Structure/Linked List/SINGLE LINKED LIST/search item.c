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
//    printf("%u \t %d \t %u\n",head,head->data, head->next->next->data);
    scanf("%d",&ser_item,printf("Enter the item you want to find : "));
    search_ll(ser_item,N);

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

void search_ll(int ser, int n)
{
    int c=0, pos[n], i;
    struct node *temp;
    for(temp=head,i=1; temp; temp=temp->next,i++)
    {
        if(temp->data==ser)
        {
            pos[c]=i;
            c++;
        }
    }
    printf("Position");
    if(c==0)
    {
        printf(" not found!!!\n\n");
    }
    else
    {
        printf(": ");
        for(i=0; i<c; i++)
        {
            printf("%d ",pos[i]);
        }
        printf("\n\n");
    }
}

