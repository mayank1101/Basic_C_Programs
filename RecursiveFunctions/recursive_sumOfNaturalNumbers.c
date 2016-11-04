#include<stdio.h>
int recsum(int);
int main()
{
int s;
s=recsum(0);
printf("Sum of the  25 terms of the series is %d\n",s);
return 0;
}

int recsum(int num)
{
	int sum=0;
	if(num==25)
	return (sum);
	
	sum=(num+recsum(++num));
	return (sum);
}
