#include<stdio.h>
void add_front(int);
void add_rear(int);
int retrieve_front(void);
int retrieve_rear(void);
void display(void);
int *front,*rear;
int a[26];

int main()
{
	int item;
	rear=NULL;
	front=NULL;
	printf("Adding elements at the front of th dequeue\n");
	add_front(10);
	add_front(20);
	add_front(30);
	add_front(40);
	display();
	printf("Adding element at the rare of the dequeue\n");
	add_rear(50);
	display();
	printf("Retrieving element from the front of the dequeuq\n");
	item=retrieve_front();
	if(item==-1)
	printf("Dequeue is empty\n");
	else
	printf("Item is %d\n",item);
	display();
	printf("Retrieving element from the rare of the dequeuq\n");
	item = retrieve_rear();
	if(item==-1)
	printf("Dequeue is empty\n");
	else
	printf("Item is %d\n",item);
	display();
	
	return 0;
}

int retrieve_rear(void)
{
	int item,i;
	if(rear==NULL)
	{
		printf("Dequeue is empty\n");
		return (-1);
	}
	else
	{
		item=*rear;
	    i=rear-front;
	if(i==0)
	{
		front=NULL;
		rear=NULL;
	}
	else
	{
		
	   *rear=0;
	   rear--;
	}
}
return (item);
}

int retrieve_front(void)
{
	int item,i;
	if(front==NULL)
	{
		printf("Dequeue is empty\n");
		return -1;
	}
	else
	{
		item=*front;
		i=rear-front;
		if(i==0)
		{
			front = NULL;
			rear = NULL;
		}
		else
		{
			*front=0;
			front--;
		}
	}
	return (item);
}

void add_rear(int item)
{
	int i;
	if(front==NULL)
	{
		front=a;
		*front=item;
		rear=a;
	}
	else
	{
		i=rear-front;
		if(i!=25)
		{
			rear++;
			*rear=item;
		}
		else
		printf("Dequeue is full\n");
	}
}

void add_front(int item)
{
	
int i,j;
if(front==NULL)
{
	front=a;
	*front=item;
	rear=a;
}
else
{
	front=a;
	i=rear-front;
	if(i!=25)
	{
		for(j=i+1;j>=0;j--)
		front[j]=front[j-1];
		front[0]=item;
		rear++;
	}
	else
	printf("Dequeue is full");
}
}

void display(void)
{
	
	int i;
	int *p=front;
	if(p==NULL)
	{
		printf("Dequeue is empty\n");
	}
	else
	{
		printf("\n");
		for(i=0;i<=(rear-front);i++)
		{
			printf("a[%d] = %d\n",i,*p++);
		}
	}
}
