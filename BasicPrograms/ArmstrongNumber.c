#include<stdio.h>
int main()
{
int i=1;
int a,b,c,sum=0;
while(i<=500)
{
	a=i%10;
	b=i%100;
	b=(b-a)/10;
	c=i/100;
	sum+=(a*a*a)+(b*b*b)+(c*c*c);
	if(sum==i)
	{
		printf("%d",i);
		printf("ARMSTRONG NUMBER\n");
	}
	else
	{
		printf("NOT ARMSTRONG NUMBER\n");
	}
	i++;
}
return 0;
}
