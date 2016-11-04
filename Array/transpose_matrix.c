#include<stdio.h>
void transpose(int (*p)[2], int, int);
int main()
{
	int arr[2][2],i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("enterd Matrix is \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	transpose(arr,2,2);
	return 0;
}

void transpose(int (*p)[2],int r, int c)
{
	int new_arr[2][2],i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			new_arr[j][i]=*(*(p+i)+j);
		}
	}
	printf("\nAfter Transpose \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",new_arr[i][j]);
		}
		printf("\n");
	}
}
