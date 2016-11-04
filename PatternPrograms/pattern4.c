#include<stdio.h>
int main()
{
int i,l,j,k,sp=20;
for(i=1,k=1;i<=5;i++)
{
	for(l=1;l<=sp;l++)
	printf(" ");
	sp-=2;
	for(j=1;j<=i;j++)
	printf("%4d",k);
	printf("\n");
	k++;
}
return 0;
}

