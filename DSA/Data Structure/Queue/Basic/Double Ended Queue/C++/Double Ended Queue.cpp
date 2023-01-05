#include<bits/stdc++.h>
#define endl "\n"
using namespace std;





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
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

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
    return 0;
}
