#include<stdio.h>
#define max 5
int main()
{
	int arr[max],i;
	for(i=0;i<max;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<max;i++)
	{
		if(arr[i]==arr[max-(i+1)])
		printf("%d\n",arr[i]);
}
	return 0;
}
