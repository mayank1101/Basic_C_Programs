#include<stdio.h>
int main()
{
int m,i;
float a,r,p,si;
printf("Enter Loan amount\n");
scanf("%f",&a);
printf("Enter Number of months\n");
scanf("%d",&m);
printf("Enter the rate of interest \n");
scanf("%f",&r);
p=a/m;
for(i=1;i<=m;i++)
{
	si=(a*1/12*r)/100;
	printf("Months = %d\tCONTRIBUTION TO PRINCIPLE =%f\t INTEREST =%f\t\n",i,p,si);
	a=a-p;
}
return 0;
}

