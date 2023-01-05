#include<stdio.h>
#include<stdlib.h>

struct node
 {
 int data;
 struct node *next;
 }*front=NULL,*rear=NULL;

void enq()
{
 int item;
 struct node *temp;
 printf("Enter the item\n");
 scanf("%d",&item);
 temp=(struct node *)malloc(sizeof(struct node));
 temp->data=item;
 temp->next=NULL;
	 if(rear==NULL)
	 {
	  front=temp;
	  rear=temp;
	 }
	 else
	 {
	  rear->next=temp;
	  rear=temp;
	 }
}

void deq()
 {
 int item;
 		 if(front==NULL)
		 {
		 printf("Queue is empty\n");
		 }
		 else
		  {

			  item=front->data;
			  printf("The element deleted = %d\n",item);
				 if(front==rear)
				  {
				  front=NULL;
				  rear=NULL;
				  }
				 else
				 {
				 front=front->next;
			 	 }
 	 	}
 }

void display()
 {
 struct node *temp;
		 if(front==NULL)
		 {
		 printf("Queue is empty\n");
		 }
		 else
		  {
		  temp=front;
		  printf("The elements of the queue are :");
			  while(temp!=NULL)
			   {
			   printf("%d\t",temp->data);
			   temp=temp->next;
			   }
		  }
 }



void main()
{
 int n;
 printf("\tMENU\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n");
	 do
	  {
	  printf("\nEnter your choice\n");
	  scanf("%d",&n);

			  switch(n)
			   {
			   case 1:
			   enq();
			   break;
			   case 2:
			   deq();
			   break;
			   case 3:
			   display();
			   break;
			   case 4:
			   break;
			   default:
			   printf("Invalid choice\n");
			   break;
			   }
	  }
	 while(n!=4);
}
