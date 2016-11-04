#include<stdio.h>
int main()
{
int i,j,k;
for(i=1;i<=230;i++)
{
	for(j=1;j<=30;j++)
	{
		for(k=1;k<=30;k++)
		{
			if((i*i+j*j)==(k*k))
			printf("%d\t%d\t%d\t\n",i,j,k);
		}
	}
}
return 0;
}
