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
void delete_ll(int item);

int main()
{
    int i, N, item,del;
    printf("Insert a node randomly and the program will put it as sorted at the LINKED LIST!!!!!\n");
    scanf("%d",&N,printf("Number of item in the linked list : "));
    if(N==0)
    {
        printf("The linked list is empty!!!\n");
    }
    else
    {
        printf("Input the item(s) : ");
        for(i=0; i<N; i++)
        {
            scanf("%d",&item);
            insert_node(item);

        }
        printf("The linked list is : ");
        print_ll();
    }

    scanf("%d",&del,printf("Enter the item you want to delete : "));
    delete_ll(del);
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

void print_ll()
{
    struct node *temp;

    for(temp=head; temp; temp=temp->next)
    {
        printf(" %d",temp->data);
    }
    printf("\n");
}
void delete_ll(int item)
{
    int flag;
    struct node *temp, *prev, *curr;
    if(head==NULL)
    {
        printf("No item for deleting!!!!\n");
    }
    else
    {
        flag=0;
        for(prev=head,curr=head; curr; prev=curr,curr=curr->next)
        {
            if(curr->data==item)
            {
                flag=1;
                if(prev==curr)
                {
                    head=curr->next;
                    free(curr);
                }
                else
                {
                    prev->next=curr->next;
                    free(curr);
                }
                break;
            }
        }
        if(flag==0)
            printf("Item could not found to delete!!!\n");
        else
        {
            printf("After deleting the linked list is :");
            print_ll();
        }
    }

}
