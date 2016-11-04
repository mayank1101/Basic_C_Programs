#include<stdio.h>
int main()
{
	int arr[][2]={{1,2},{3,4},{5,6}};
	int i,j;
	int (*p)[2],*pint;
	for(i=0;i<3;i++)
	{
		p=&arr[i];
		pint=(int *)p;
		printf("\n");
		for(j=0;j<2;j++)
		{
			printf("%d\t",*(pint+j));
		}
	}
	return 0;
}

