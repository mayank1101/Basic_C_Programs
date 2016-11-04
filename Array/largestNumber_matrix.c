#include<stdio.h>
int largest(int (*p)[2], int, int);
int main()
{
	int arr[2][2],i,j,l;
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
	l=largest(arr,2,2);
	printf("Largest number is %d\n",l);
	return 0;
}

int largest(int (*p)[2],int r,int c)
{
	int l,i,temp,j;
	l=*(*(p+0)+0);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(*(*(p+i)+j)>l)
			{
				
			temp=*(*(p+i)+j);
			*(*(p+i)+j)=l;
			l=temp;
		}
	}
}
	return l;
}
	
		
