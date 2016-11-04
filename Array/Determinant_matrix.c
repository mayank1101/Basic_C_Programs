/*Determinant of a matrix*/
#include<stdio.h>
#include<malloc.h>
int det(int *,int);
int main()
{
	int *arr,i,j,index,num,n,sum;
	printf("Enter the value of n of matrix (n*n)\n");
	scanf("%d",&n);
	printf("Enter the numbers\n");
	arr=calloc(n*n,2);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&num);
			index=i*n+j;
			arr[index]=num;
		}
	}
	
	printf("Entered matrix is \n");
	for(i=0;i<n;i++)
	{
		for(j=i;j<n*n;j+=n)
		{
			printf("%d\t",arr[j]);
		}
		printf("\n");
	}
	
	sum=det(arr,n);
	printf("%d",sum);
	return 0;
}

int det(int *arr, int order)
{
	int sign = 1,sum =0,i,j,k,count,*arr2;
	int newsize,newpos,pos;
	if(order==1)
	return (arr[0]);
	
	for(i=0;i<order;i++,sign*=-1)
	{
		newsize=(order-1)*(order-1);
		arr2=calloc(newsize,2);
		for(j=1;j<order;j++)
		{
		for(k=0,count=0;k<order;k++)
		{
			if(k==i)
			continue;
			pos=j*order+k;
			newpos=(j-1)*(order-1)+count;
			arr2[newpos]=arr[pos];
			count++;
		}
	}
	sum+=arr[i]*sign*det(arr2,order-1);
}
return (sum);
}

	
