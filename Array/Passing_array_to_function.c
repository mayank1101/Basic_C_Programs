/*CALL BY VALUE*/
#include<stdio.h>
void display(int);
void display1(int *);
int main()
{
	int i;
	int arr[5]={5,6,8,2,4};
	for(i=0;i<5;i++)
	{
		display(arr[i]);
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		display1(&arr[i]);
	}
	return 0;
}

void display(int a)
{
	printf("%d\t",a);
}

	
/*CALL BY REFRENCE*/
void display1(int *a)
{
	printf("%d\t",*a);
}
