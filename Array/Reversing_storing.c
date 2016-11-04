#include<stdio.h>
#define max 10
int main()
{
	int arr[max],i,arr1[max],k;
	for(i=0;i<max;i++)
	scanf("%d",&arr[i]);
	for(i=max-1;i>=0;i--)
	{
		arr1[k]=arr[i];
	    k++;
   }
   printf("Reverse storing of array \n");
   for(i=0;i<max;i++)
   printf("%d\n",arr1[i]);
   return 0;
}

	
	
