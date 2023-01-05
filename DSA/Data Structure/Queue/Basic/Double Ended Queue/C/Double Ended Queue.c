#include<stdio.h>
#define MAX_SIZE 100
int front_id=-1, rear_id=-1;
int queue[MAX_SIZE];

void insert_at_back(int ele)
{
    if(rear_id==MAX_SIZE-1)
        printf("Queue is overflowed!!!\n");
    else
    {
        if(front_id==-1)
            front_id=0;
        queue[++rear_id]=ele;
    }
}

void delete_from_back()
{
    if(rear_id ==-1 || rear_id<front_id)
    {
        printf("Queue is underflowed!!!!\n");
        return;
    }
    queue[rear_id]=0;
    rear_id--;
    printf("Delete from back successfull!!!\n");
}

void insert_at_front(int ele)
{
    if(front_id==-1)
    {
        queue[++front_id]=ele;
        rear_id=0;
        return;
    }
    else if(front_id==0)
        printf("Queue is overflowed!!!\n");
    else
    {
        queue[--front_id]=ele;
    }


}

void delete_from_front()
{
    if(front_id==-1 || front_id>rear_id)
    {
        printf("Queue is underflowed!!!!\n");
        return;
    }

    queue[front_id]=0; //Indicate null value
    front_id++;
    printf("Delete from front successfull!!!\n");
}

int front()
{
    return queue[front_id];
}

int rear()
{
    return queue[rear_id];
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
    if(front_id==-1 || front_id>rear_id)
    {
        printf("Queue is empty!!!!\n");
        return;
    }
    else
    {
        for(int i=front_id; i<=rear_id; i++)
            printf("%d ",queue[i]);
        printf("\n");
    }
}


int main()
{


    printf("Welcome to the QUEUE!!!\n");
    printf("Press 1 to insert an element at back.\n");
    printf("Press 2 to delete an element at back.\n");
    printf("Press 3 to insert an element at front.\n");
    printf("Press 4 to delete an element at front.\n");
    printf("Press 5 to get the front element.\n");
    printf("Press 6 to get the rear element.\n");
    printf("Press 7 to get the size of the queue.\n");
    printf("Press 8 to check if the queue is empty.\n");
    printf("Press 9 to print the queue.\n");
    printf("Press 10 to exit.\n");
    printf("N.B. Max capacity of the queue is %d\n",MAX_SIZE);

    int ele, choice;
    int exit = 0;

    while(!exit)
    {
        scanf("%d",&choice,printf("Enter your choice: "));
        switch(choice)
        {
            case 1:
                scanf("%d",&ele, printf("Enter the element to insert at back: "));
                insert_at_back(ele);
                break;
            case 2:
                printf("You tried to delete an element from back.\n");
                delete_from_back();
                break;
            case 3:
                scanf("%d",&ele, printf("Enter the element to insert at front: "));
                insert_at_front(ele);
                break;
            case 4:
                printf("You tried to delete an element from front.\n");
                delete_from_front();
                break;
            case 5:
                printf("Front element of the queue: %d\n",front());
                break;
            case 6:
                printf("Rear element of the queue: %d\n",rear());
                break;
            case 7:
                printf("Size of the queue: %d\n",size());
                break;
            case 8:
                if(isEmpty())
                    printf("The queue is empty.\n");
                else
                    printf("The queue is not empty.\n");
                break;
            case 9:
                printf("The queue: ");
                print();
                break;
            case 10:
                exit=1;
                printf("You terminate the programe.\n");
                break;
        }
    }
    return 0;
}

