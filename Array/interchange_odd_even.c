#include<stdio.h>
#define max 10
int main()
{
int arr[max],i,temp;
for(i=0;i<max;i++)
scanf("%d",&arr[i]);
printf("Entered array is\n");
for(i=0;i<max;i++)
{
	printf("%d \n",arr[i]);
}
for(i=0;i<max;i+=2)
{
	temp=arr[i];
	arr[i]=arr[i+1];
	arr[i+1]=temp;
}

printf("After interchanging odd and even terms\n");
for(i=0;i<max;i++)
printf("%d\n",arr[i]);

return 0;
}


		
