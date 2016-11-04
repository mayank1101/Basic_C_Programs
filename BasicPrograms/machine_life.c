#include<stdio.h>
int main()
{
float c=6000.0,p=1000.0,r=0.09,salvage=2000.0;
float value_1,value_2;
int y=1;
while(1)
{
	value_1=salvage+p*y;
	value_2=c+(c*r*y);
	printf("Year=%2d Value1=%10.2f Value2=%10.2f\n",y,value_1,value_2);
	if(value_1>value_2)
	{
		break;
	}
	y++;
}
printf("Minimum life of machine is %d\n",y);
return 0;
}
