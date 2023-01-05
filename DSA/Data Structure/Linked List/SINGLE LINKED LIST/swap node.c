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
void swap_ll(int p1, int p2);

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

    if(N<2)
    {
        printf("Swap is not possible!!!!\n");
    }
    else
    {
        int s1,s2;
//        scanf("%d %d",&s1,&s2,printf("Enter the positions to swap between 1 to %d : ",N));
        scanf("%d %d",&s1,&s2,printf("Enter the items to swap : "));
        swap_ll(s1,s2);
        printf("After swap :- \n");
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
         printf("\n");
    }

}

void swap_ll(int p1, int p2)
 {
    int i;
    struct node *curr1, *prev1, *curr2, *prev2, *temp;

///   swap by item....
    for(temp=head, prev1=curr1=head; temp; temp=temp->next, prev1=curr1, curr1=curr1->next)
    {
        if(p1==temp->data)
            break;
    }
    for(temp=head, prev2=curr2=head; temp; temp=temp->next, prev2=curr2, curr2=curr2->next)
    {
        if(p2==temp->data)
            break;
    }

///   swap by position....
//    for(i=1, curr1=head, prev1=head ,curr2=head, prev2=head ; (i<=p1 || i<=p2); i++)
//    {
//        if(i<p1)
//        {
//            prev1=curr1;
//            curr1=curr1->next;
//        }
//        if(i<p2)
//        {
//            prev2=curr2;
//            curr2=curr2->next;
//        }
//    }
    if(curr1==prev2)
    {
        prev1->next=curr1->next;
        //printf("%u %u %u %u\n",curr1,curr1->next,curr2,curr2->next);
        curr1->next=curr2->next;
        //printf("%u\n",curr1->next);
        curr2->next=curr1;
        //printf("%u\n",curr2->next);
        if(curr1==prev1)
        {
            head=curr2;
        }
    }
    else if(curr2==prev1)
    {
        prev2->next=curr2->next;
        curr2->next=curr1->next;
        curr1->next=curr2;
        if(curr2==prev2)
        {
            head=curr1;
        }
    }
    else if(curr1==prev1 && prev2!=curr1)
    {
        prev2->next=curr2->next;
        curr2->next=curr1->next;
        curr1->next=prev2->next;
        prev2->next=curr1;
        head=curr2;
    }
    else if(curr2==prev2 && prev1!=curr2)
    {
        prev1->next=curr1->next;
        curr1->next=curr2->next;
        curr2->next=prev1->next;
        prev1->next=curr2;
        head=curr1;
    }
    else
    {
        prev2->next=curr2->next;
        prev1->next=curr2;
        curr2->next=curr1->next;
        curr1->next=prev2->next;
        prev2->next=curr1;
    }
}
