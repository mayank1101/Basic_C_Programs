/*displaying Address and values of 2D array by different repesentations*/
#include<stdio.h>
int main()
{
	int arr[][2]={
		{1,2},
		{3,4},
		{5,6}};
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",arr[i][j]);
	}
	printf("\n");
}
printf("\n");
for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",*(*(arr+i)+j));
	}
	printf("\n");
}
printf("\n");
for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%p\n",(*(arr+i)+j));
	}
}
for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("address of arr[%d][%d] is %p\n",i,j,&(arr[i][j]));
	}
	printf("\n");
}

for(i=0;i<3;i++)
	{
			printf("address of %d 1-D array is %p\n",i,arr[i]);
	}
	return 0;
}
