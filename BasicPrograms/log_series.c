#include<stdio.h>
#include<math.h>
int main()
{
float r,x,z,sum=0;
int i;
printf("LOG SERIES \n");
printf("Enter the value of x \n");
scanf("%f",&x);
z=(x-1)/x;
for(i=1;i<=7;i++)
{
	r=(1.0/2.0)*pow(z,i);
	sum+=r;
}
printf("Sum of first 7 terms is = %f \n",sum);
return 0;
}
