#include<stdio.h>
#include<math.h>
int main()
{
int n,oct,r,p;
p=oct=0;
printf("Enter the number\n");
scanf("%d",&n);
while(n>0)
{
	r=n%8;
	n=n/8;
	oct+=r*pow(10,p);
	p++;
}
printf("Octal value eqqivalent to %d is %d\n",n,oct);
return 0;
}
