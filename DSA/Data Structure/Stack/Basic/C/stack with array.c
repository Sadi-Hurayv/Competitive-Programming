#include<stdio.h>
#define MAX_SIZE 100
int stack[MAX_SIZE];
int top_id = -1;

void push(int item)
{
    if(top_id==MAX_SIZE-1)
    {
        printf("Stack overflow!!!!\n");
        return;
    }
    stack[++top_id]=item;
}

void pop()
{
    if(top_id==-1)
    {
        printf("Stack underflow because stack is already empty!!!\n");
        return;
    }
    stack[top_id]=0;//Indicate null value
    top_id--;
    printf("Pop out successfull!!!\n");
}

int top()
{
    return stack[top_id];
}

int size()
{
    return top_id+1;
}

int isEmpty()
{
    if(top_id==-1)
        return 1;

    return 0;
}

void print()
{
    if(top_id<=-1)
    {
        printf("Stack is empty!!!\n");
    }
    else
    {
        printf("Now the stack is : ");
        for(int i=0; i<=top_id; i++)
        {
            printf("%d ",stack[i]);
        }
        printf("\n");
    }

}

int main()
{
    printf("Welcome to the STACK!!!\n");
    printf("Press 1 to push an element.\n");
    printf("Press 2 to pop an element.\n");
    printf("Press 3 to get the top element.\n");
    printf("Press 4 to get the size of the stack.\n");
    printf("Press 5 to check if the stack is empty.\n");
    printf("Press 6 to print the stack.\n");
    printf("Press 7 to exit.\n");
    printf("N.B. Max capacity of the stack is %d\n",MAX_SIZE);

    int ele, choice;
    int exit = 0;

    while(!exit)
    {
        scanf("%d",&choice,printf("Enter your choice: "));
        switch(choice)
        {
            case 1:
                scanf("%d",&ele, printf("Enter the element to push: "));
                push(ele);
                break;
            case 2:
                printf("You tried to pop an element.\n");
                pop();
                break;
            case 3:
                printf("Top element of the stack: %d\n",top());
                break;
            case 4:
                printf("Size of the stack: %d\n",size());
                break;
            case 5:
                if(isEmpty())
                    printf("The stack is empty.\n");
                else
                    printf("The stack is not empty.\n");
                break;
            case 6:
                printf("The stack: ");
                print();
                break;
            case 7:
                exit=1;
                printf("You terminate the programe.\n");
                break;
        }
    }

    return 0;
}
