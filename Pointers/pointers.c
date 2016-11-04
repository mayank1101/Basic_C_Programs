#include<stdio.h>
int main()
{
int i=2,*x,arr[5]={5,7,8,9,10},l;
int *m,*n;
float j=3.5,*y;
char k='a',*z;
printf("Value of i is %d\t\n",i);
printf("Value of j is %f\t\n",j);
printf("Value of k is %c\t\n",k);
x=&i;
y=&j;
z=&k;
printf("Value of x is %u\t\n",x);
printf("Value of y is %u\t\n",y);
printf("Value of z is %u\t\n",z);
printf("\n");
x=x-2;
y=y-6;
z=z-10;
printf("Value of x is %u\t\n",x);
printf("Value of y is %u\t\n",y);
printf("Value of z is %u\t\n",z);
printf("\n");
for(l=0;l<5;l++)
{
	printf("%d\t",arr[l]);
	printf("%u\t",&arr[l]);
	printf("\n");
}

m=&arr[0];
n=&arr[3];
printf("%u-%u=%u\t\n",n,m,n-m);
printf("%d-%d=%d\t\n",*n,*m,*n-*m);
return 0;
}
