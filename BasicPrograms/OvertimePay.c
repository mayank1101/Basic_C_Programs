#include<stdio.h>
int main()
{
	int i,n,extra_time;
	float ovr_pay;
	for(i=0;i<10;i++)
	{
	printf("Enter the number of hours an employee worked\n");
	scanf("%d",&n);
		if(n>40)
		{
			extra_time=n-40;
			ovr_pay=12.00*extra_time;
			printf("Over time pay of the employee is %f\n",ovr_pay);
		}
		else
		{
			printf("NO EXTRA WAGES\n");
		}
	}
		return 0;
	}
	
