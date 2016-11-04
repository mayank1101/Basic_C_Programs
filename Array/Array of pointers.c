/*array of pointers*/
#include<stdio.h>
int main()
{
	int *ptr[5];
	int arr[5]={1,2,3,4,5},i;
	for(i=0;i<5;i++)
	{
		*(ptr+i)=&*(arr+i);
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf("%d %p\t",*(*(ptr+i)),*(ptr+i));
	}
	return 0;
}
