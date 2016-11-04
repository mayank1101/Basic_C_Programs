/*Accessing array elements by usual method & through pointers*/
#include<stdio.h>
int main()
{
	int arr[5]={4,5,8,2,10},i;
	int *ptr;
	ptr=arr;
	for(i=0;i<5;i++)
	{
		printf("element %d\t",*ptr);
		printf("address %u\n",ptr);
		ptr++;
	}
	return 0;
}

		
