#include<stdio.h>
int main()
{
 int n,i,fact=1;
 printf("Enter the number for Factorial\n");
 scanf("%d",&n);
 for(i=n;i>0;i--)
 {
	 fact=fact*i;
 }
 printf("Factorial of the number %d is %d ",n,fact);
 return 0;
}
