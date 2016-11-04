#include<stdio.h>

int arr [] = {1,2,-9,7,6,10};
int *ptr;
int arr2 [6];

int *copy(int *p1, int *p2, int num)
{
	int i;
	for(i=0;i<num;i++)
	{
		*p1++=*p2++;
	}
	return p1;
}

int main()
{
	ptr=arr;
	for(int i=0;i<6;i++)
	{
		printf("arr [%d] = %d \n",i,*(ptr+i));
	}
	copy(arr2,arr,6);
	for(int i=0;i<6;i++)
	{
		printf("arr2 [%d] = %d \n",i,arr2[i]);
	}
//	important concept
	int demo [1];
	demo[0]=2;
	printf("%d \n",demo[0]);
	0[demo]=2;
	printf("%d \n",0[demo]);
	return 0;
}
