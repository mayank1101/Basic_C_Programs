#include<stdio.h>
int main()
{
int y;
float i,x;
for(y=1;y<=6;y++)
{
	for(x=5.5;x<=12.5;x++)
	{
		i=2+(y+0.5*x);
		printf("Intelligence of a person (value of i)= %f\n",i);
	}
}
return 0;
}

