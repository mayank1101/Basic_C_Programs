#include<stdio.h>
#define MAX 100
int main()
{
int arr[MAX],i,k,c=0,n;
scanf("%d",&n); // number of terms in array
for(i=0;i<n;i++)
{
	scanf("%d",&arr[i]);
}
scanf("%d",&k); //search key
for(i=0;i<n;i++)
{
	if(arr[i]==k)
	c++;
}
printf("%d",c);
return 0;
}



