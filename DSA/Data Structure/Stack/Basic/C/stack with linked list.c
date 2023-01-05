#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node *top=NULL;

void push(int item);
void print_ll(void);
void pop();

int main()
{
    int i, pu, item, po;
    //printf("Insert a node randomly and the program will put it at the first of the LINKED LIST!!!!!\n");
    scanf("%d",&pu,printf("Enter the number of item(s) to push into the stack : "));
    if(pu==0)
    {
        printf("There is no item to input!!!!\n");
    }
    else
    {
        printf("Input the item(s) : \n");
        for(i=0; i<pu; i++)
        {
            scanf("%d",&item);
            push(item);
        }
        print_ll();
        scanf("%d",&po,printf("Enter the number of item(s) to pop from the stack : "));
        for(int i=0; i<po; i++)
        {
            if(top==NULL)
            {
                printf("There is farther  no item to pop. Cz stack is already empty!!!\n");
                break;
            }
            else
            {
                pop();
            }
        }
        print_ll();
    }


    return 0;
}

void push(int item)
{

    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=item;
    temp->next=NULL;
    if(head==NULL)
    {
        head=top=temp;
    }
    else
    {
        for(top=head; top; top=top->next)
        {
            if(top->next==NULL)
            {
                top->next=temp;
                top=temp;
                break;
            }
        }
    }
}

void print_ll(void)
{
    struct node *temp;
    if(top==NULL)
    {
        printf("There is no item to print!!!!\n");
    }
    else
    {
         printf("The stack is");
         for(temp=head; temp; temp=temp->next)
         {
             printf(" %d",temp->data);
         }
         printf("\n");
    }

}

void pop()
{
    struct node *temp, *curr;
    temp=top;
    for(curr=head; curr; curr=curr->next)
    {
        if(curr->next==top)
        {
            curr->next=top->next;
            top=curr;
            free(temp);
            break;
        }
    }
}
