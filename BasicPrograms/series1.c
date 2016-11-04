#include<stdio.h>
int main()
{
int i=1,j;
float sum=0.0,fact;
while(i<=7)
{
	fact=1.0;
	for(j=i;j>0;j--)
	fact*=j;
	sum+=i/fact;
	i++;
}
printf("Sum of first 7 terms of the series is %f\t",sum);
return 0;
}
