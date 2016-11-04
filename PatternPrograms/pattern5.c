#include<stdio.h>
int main()
{
int i,j,k,f1,f2,f3,z,t,sp=20;
for(i=0;i<=4;i++)
{
	for(k=1;k<=sp;k++)
	printf(" ");
	sp-=2;
	for(j=0;j<=i;j++)
	{
		f1=f2=f3=1;
		t=i;
		while(t!=0)
		{
			f1=f1*t;
			t--;
		}
		t=j;
		while(t!=0)
		{
			f2=f2*t;
			t--;
		}
		t=i-j;
		while(t!=0)
		{
			f3=f3*t;
			t--;
		}
		z=(f2*f3)/(f1);
		printf("%4d",z);
	}
	printf("\n");
}
return 0;
}
