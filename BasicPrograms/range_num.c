#include<stdio.h>
int main()
{
int b,s,n,r,num,flag=0;
printf("How many numbers are there in the set\n");
scanf("%d",&n);
while(n>0)
{
	printf("Enter the number \n");
	scanf("%d",&num);
	if(flag==0)
	{
	b=s=num;
	flag=1;
}
	else
	{
		if(num>b)
		{
			b=num;
		}
		if(num<s)
		{
			s=num;
		}
	}
	n--;
}
if(s<0)
r=s+b;
else
r=b-s;
if(r<0)
r=r*-1;
printf("\nRange of the Number is %d \t",r);
return 0;
}

	
