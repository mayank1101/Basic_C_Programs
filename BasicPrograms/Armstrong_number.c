#include<stdio.h>
int main()
{
	int t,n,d,sum=0;
	printf("Enter the number\n");
	scanf("%d",&n);
	t=n;
	while(t!=0)
	{
		d=t%10;
		sum+=(d*d*d);
		t=t/10;
	}
	if(sum==n)
	{
		printf("Entered number is Armstrong Number\n");
	}
	else
	{
		printf("Entered number is not Armstrong number\n");
	}
	return 0;
}
