#include<stdio.h>
#include<math.h>
int main()
{
int n,rev=0;
printf("Enter the Number\n");
scanf("%d",&n);
while(n>0)
{
	rev*=10;
	rev+=n%10;
	n=n/10;
}
printf("Reversed number is %d\t",rev);
return 0;
}

