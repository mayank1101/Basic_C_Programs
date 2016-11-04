#include<stdio.h>
#include<math.h>
int main()
{
float x[] = {3.0,4.5,5.5,6.5,7.5,8.5,9.5,10.0};
float y[] = {1.5,2.0,3.5,5.0,6.0,7.5,9.0,10.5,12.0,14.0};
float sxs=0.0,sx=0.0,syx=0.0,sy=0.0,a,b,mx,my; //sx=summation of x, sxs=summation of x^2,syx=summation of yx
int i,n=10;
for(i=0;i<10;i++)
{
sx+=sx+x[i];
}
for(i=0;i<10;i++)
{
	sy+=sy+y[i];
}
for(i=0;i<10;i++)
{
	syx=syx+(y[i]*x[i]);
}
for(i=0;i<10;i++)
{
	sxs+=pow(x[i],2);
}
b=(n*syx-sx*sy)/n*sxs-pow(sx,2);
mx=sx/n;
my=sy/n;
a=my-b*mx;
printf("value of a is %f\n",a);
printf("value of b is %f\n",b);
printf("Equation of straight line is : y =%.3f + %.3f x ",a,b);
return 0;
}

	
