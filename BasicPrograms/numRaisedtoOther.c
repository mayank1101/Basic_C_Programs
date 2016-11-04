#include<stdio.h>
int main()
{
int n1,n2,i;
long result=1;
printf("Enter the first number\n");
scanf("%d",&n1);
printf("Enter the second number\n");
scanf("%d",&n2);
printf("%d raise to the power of %d ",n1,n2);
for(i=0;i<n2;i++)
{
	result*=n1;
}
printf("\n%ld",result);
return 0;
}
