#include<stdio.h>
int main()
{
int num,p,n,z;
int ans=1;
p=n=z=0;
do
{
	printf("Enter the number \n");
	scanf("%d",&num);
	if(num==0)
	z++;
	else if(num>0)
	p++;
	else 
	n++;
	printf("Do you want to enter more numbers\n");
	printf("For YES enter 1, for NO enter 0\n");
	scanf("%d",&ans);
}while(ans==1);
printf("\nNumber of zeros %d \t",z);
printf("\nNumber of positive numbers %d \t",p);
printf("\nNumber of negative numbers %d \t",n);
return 0;
}
