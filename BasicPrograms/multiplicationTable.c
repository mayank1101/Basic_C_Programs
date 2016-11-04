#include<stdio.h>
int main()
{
int n,i,r;
printf("Enter the number\n");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
	r=n*i;
	printf("%2d * %2d = %d\n",n,i,r);
}
return 0;
}

	
