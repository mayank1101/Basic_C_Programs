#include<stdio.h>
int main()
{
int i;
for(i=0;i<=24;i++)
{
	if(i==0)
	{
		printf("12 MIDNIGHT \n");
	}
	if((i>0)&&(i<12))
	{
		printf("%d AM\n",i);
	}
	if(i==12)
	{
		printf("12 NOON\n");
	}
	if(i>12)
	{
		printf("%d PM\n",i);
	}
}
return 0;
}
