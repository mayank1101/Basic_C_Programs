#include<stdio.h>
#include<math.h>
int main()
{
int n,i,q,c;
float p,r,a,z;
for(i=1;i<=10;i++)	
{
	printf("Enter the value of Principle \n");
    scanf("%f",&p);
    printf("Enter the value of rate \n");
    scanf("%f",&r);
    printf("Enter the value of year \n");
    scanf("%d",&n);
    printf("Enter the number of times principle compounded \n");
    scanf("%d",&q);
    z=(1+r/q);
    c=n*q;
    r=pow(z,c);
    a=p*r;
    printf("Amount = %f\n",a);
}
return 0;
}


