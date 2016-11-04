#include<stdio.h>
#define max 5
void modify(int *,int);
int main()
{
int arr[max],i;
for(i=0;i<max;i++)
scanf("%d",&arr[i]);
modify(arr,max);
for(i=0;i<max;i++)
printf("%d\n",arr[i]);
return 0;
}

void modify(int *p, int num)
{
	int i;
	for(i=0;i<num;i++)
	*(p+i)=*(p+i)*3;
}
