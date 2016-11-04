/*non recursive method for calculating binary equivalence*/
#include<stdio.h>
void binary(int);
int recbinary(int);
int main()
{
	int num;
	printf("Enter the number \n");
	scanf("%d",&num);
	binary(num);
	recbinary(num);
	return 0;
}

void binary(int n)
{
	int r,s=0,rev,r1;
	while(n!=0)
	{
		r=n%2;
		s=s*10+r;
		n=n/2;
	}
	while(s!=0)
	{
		r1=s%10;
		rev=rev*10+r1;
		s=s/10;
	}
	printf("Binary Equivlent of the given number is %d\t\n",rev);
}

int recbinary(int n1)
{
	int r;
	r=n1%2;
	n1=n1/2;
	if(n1==0)
	{
		printf("Binary equivalence of the number is %d",r);
		return (r);
	}
	else
	recbinary(n1);
	printf("%d",r);
}
