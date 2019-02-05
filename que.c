#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int queue_arr[MAX];
int rear=-1;
int front=-1;
main()
{
int choice;
while(1)
{
printf("1.insert\n");
printf("2.delete\n");
printf("3.display\n");
printf("4.quit\n");
printf("enter ur choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
	insert();
	break;
case 2:
	del();
	break;
case 3:
	display();
	break;
case 4:
	exit(1);
default:
printf("wrong choice\n");
}
}
}
insert()
{
int added_item;
if(rear==(MAX-1))
printf("QUEUE OVERFLOW");
else
{
if(front==-1)
front=0;
printf("input the element for adding in queue:");
scanf("%d",&added_item);
rear=rear+1;
queue_arr[rear]=added_item;
}
}
del()
{
if(front==-1||front>rear)
{
printf("queue underflow\n");
return 0;
}
else
 { 
printf("element deleted from queue is:%d\n",queue_arr[front]);
front=front+1;
}
}
display()
{
int i;
if(front==-1)
printf("queue is empty\n");
else 
{
 printf("queue is:\n");
for(i=front;i<=rear;i++)
printf("%d",queue_arr[i]);
printf("\n");
}
}
