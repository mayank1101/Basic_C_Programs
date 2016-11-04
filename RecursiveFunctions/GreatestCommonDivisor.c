/*Greatest Common Divisior using Euclid's algorithm*/
#include<stdio.h>
int gcd(int,int);
int main()
{
	int n1,n2,result;
	printf("Enter the two numbers whose Greatest Common Divisior is to be found\n");
	scanf("%d%d",&n1,&n2);
	result=gcd(n1,n2);
	printf("greatest Commomn Divisior is %d\t\n",result);
return 0;
}

int gcd(int n1,int n2)
{
	int r,temp,n,m;
	if(n2>n1)
	{
		temp=n1;
		n1=n2;
		n2=temp;
	}
	if(n1==n2)
	return n1;
	while(1)
	{
		r=n1/n2;
		m=n1-(r*n2);
		if(n1%n2==0)
		n=n2;
		if(m==0)
		break;
		n1=n2;
		n2=m;
		n=m;
	}
	return n;
}

		
		
