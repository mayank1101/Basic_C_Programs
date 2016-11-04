/*Sine Series up to 5 significant digits (we will take 10 terms)*/
#include<stdio.h>
#include<math.h>
int numerator(int, int);
int denominator(int);
int main()
{
	float x,a,b,n,sum=0.0;
	int i,j;
	printf("Enter the value of the x in (Sin(x))\n");
	scanf("%f",&x);
	for(i=1,j=1;j<=19;i++,j+=2)
	{
		a=numerator(x,j);
		b=denominator(j);
		n=a/b;
		(i%2==0)?sum=sum-n:(sum=sum+n);
	}
	printf("Sum of the Sine series upto 5 significant digits is %f\t\n",sum);
	return 0;
}

int numerator(int x,int j)
{
	float p=1.0; 
	int i;
	for(i=1;i<=j;i++)
	p*=x;
	return (p);
}

int denominator(int j)
{
	float fact=1.0; 
	int i;
	for(i=1;i<=j;i++)
	fact*=i;
	return (fact);
}

	
