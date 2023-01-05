#include<stdio.h>
#define MAX_SIZE 3
int front_id=-1, rear_id=-1, count=0;
int queue[MAX_SIZE];

void enqueue(int item)
{
    if(count==MAX_SIZE)
        printf("Queue is overflowed!!!\n");
    else
    {
        if(front_id==-1)
            front_id=0;
        queue[(++rear_id)%MAX_SIZE]=item;
        count++;
    }
}

void dequeue()
{
    if(count==0)
    {
        printf("Queue is underflowed!!!!\n");
        return;
    }

    queue[front_id]=0; //Indicate null value
    (++front_id)%MAX_SIZE;
    count--;
    printf("Dequeue successfull!!!\n");
}

int front()
{
    return queue[front_id];
}

int size()
{
    return (rear_id-front_id)+1;
}

int isEmpty()
{
    return (front_id>rear_id);
}

void print()
{
    if(front_id==-1 || rear_id+1==front_id)
    {
        printf("Queue is empty!!!!\n");
        return;
    }
    else
    {
        int tmp=front_id+count;
        for(int i=front_id; i<tmp; i++)
            printf("%d ",queue[i%MAX_SIZE]);
        printf("\n");
    }
}

int main()
{
    printf("Welcome to the QUEUE!!!\n");
    printf("Press 1 to enqueue an element.\n");
    printf("Press 2 to dequeue an element.\n");
    printf("Press 3 to get the front element.\n");
    printf("Press 4 to get the size of the queue.\n");
    printf("Press 5 to check if the queue is empty.\n");
    printf("Press 6 to print the queue.\n");
    printf("Press 7 to exit.\n");
    printf("N.B. Max capacity of the queue is %d\n",MAX_SIZE);

    int ele, choice;
    int exit = 0;

    while(!exit)
    {
        scanf("%d",&choice,printf("Enter your choice: "));
        switch(choice)
        {
            case 1:
                scanf("%d",&ele, printf("Enter the element to enqueue: "));
                enqueue(ele);
                break;
            case 2:
                printf("You tried to dequeue an element.\n");
                dequeue();
                break;
            case 3:
                printf("Front element of the queue: %d\n",front());
                break;
            case 4:
                printf("Size of the queue: %d\n",size());
                break;
            case 5:
                if(isEmpty())
                    printf("The queue is empty.\n");
                else
                    printf("The queue is not empty.\n");
                break;
            case 6:
                printf("The queue: ");
                print();
                break;
            case 7:
                exit=1;
                printf("You terminate the programe.\n");
                break;
        }
    }
}

