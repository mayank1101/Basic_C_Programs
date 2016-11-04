#include<stdio.h>
#define max 10
int main()
{
int arr[max],i;
int p=0,e=0,n=0,o=0;
for(i=0;i<max;i++)
scanf("%d",&arr[i]);
for(i=0;i<max;i++)
{
	if(arr[i]<0)
	n++;
	if(arr[i]>0)
	p++;
	if(arr[i]%2==0)
	e++;
	if(arr[i]%2!=0)
	o++;
}
printf("negative terms %d ",n);
printf("positive terms %d ",p);
printf("even terms %d ",e);
printf("odd terms %d ",o);
return 0;
}

