#include<stdio.h>
#include<math.h>
int main()
{
int i,pop;
float p=10000.00;
float r=0.01;
for(i=1;i<=10;i++)
{
	pop=p/pow((1+r/100),i);
	printf("%d\n",pop);
}
return 0;
}

