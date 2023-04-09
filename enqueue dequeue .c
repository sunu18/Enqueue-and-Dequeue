#include<conio.h>
#include<stdio.h>
int queue[10],front=-1,rear=-1;
void enqueue();
void dequeue();
int main()
{
	int i;
	for (i=0; i=2; i++)
	{
	
	int a,data;
	printf("enter 1 for enqueue and 2 for dequeue");
	scanf("%d",&a);
	if (a==1)
	{
		
		enqueue();
	}
	else if (a==2)
	{
		dequeue();
	}
    }
}

void enqueue()
{
	int data;
	if (rear==9)
	{
		printf("overflow");
	}
	else
	{
		printf("enter data");
	    scanf("%d",&data);
		rear+=1;
		queue[rear]=data;
		if (front==-1)
		{
			front=0;
		}
	}
}
void dequeue()
{
	if (front==-1)
	{
		printf("underflow");
	}
	else if (front>rear)
	{
		front=-1;
		rear=-1;
	}
	else
	{
		front+=1;
	}
}
