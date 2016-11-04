#include<stdio.h>
#define max 5
int main()
{
int arr[max],i,min,temp;
for(i=0;i<max;i++)
scanf("%d",&(*(arr+i)));
min=*(arr+0);
for(i=0;i<max;i++)
{
	if(*(arr+i)<min)
	{
		temp=*(arr+i);
		*(arr+i)=min;
		min=temp;
	}
}
printf("%d\n",min);
return 0;
}

	
	
