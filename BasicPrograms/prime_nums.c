#include<stdio.h>
int main()
{
int n,i=2;
printf("All the prime numbers between 1 to 300 are \n");
while(n<=10)
{
	i=2;
	while(i<n)
	{
	if(n%i==0)
	break;
	else
	++i;
}
if(i==n)
printf("%d\t",n);
n++;
}
return 0;
}
