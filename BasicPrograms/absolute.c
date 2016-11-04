#include<stdio.h>
#include<math.h>
int main()
{
	int n,new;
	printf("Enter the number \n");
	scanf("%d",&n);
	if(n<0)
	{
		new=-1*n;
		printf("Absolute value of the number is %d \n",new);
	}
	else
	printf("Absolute value of the number is %d \n",n);
	return 0;
}

