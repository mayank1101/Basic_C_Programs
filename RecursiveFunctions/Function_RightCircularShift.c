#include<stdio.h>
void shift(int,int,int);
int main()
{
int a,b,c;
printf("Enter any three numbers \n");
scanf("%d%d%d",&a,&b,&c);
shift(a,b,c);
return 0;
}

void shift(int x, int y, int z)
{
	int temp;
	temp=z;
	z=y;
	y=x;
	x=temp;
	printf("After right shift values are respectively %d\t%d\t%d\t\n",x,y,z);
}
