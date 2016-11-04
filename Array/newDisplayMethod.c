#include<stdio.h>
#include<malloc.h>
int main()
{
	int *arr,i,j,n,index,num;
	printf("Enter the value of n for (n*n) matrix\n");
	scanf("%d",&n);
	arr=calloc(n*n,2);
	printf("Enter the numbers\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&num);
			index=i*n+j;
			*(arr+index)=num;
		}
	}
	
	printf("Enterd Matrix is \n");
	for(i=0;i<n;i++)
	{
		for(j=i;j<n*n;j+=n)
		{
			printf("%d\t",*(arr+j));
		}
		printf("\n");
	}
	free(arr);
	return 0;
}

