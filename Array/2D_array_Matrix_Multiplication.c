/*Matrix Multiplication*/
#include<stdio.h>
void mul(int ar1[3][2],int ar2[2][3]);
int main()
{

int m1[3][2],m2[2][3];
int r,c;
printf("Enter the values of the matrix 1 row wise\n");
for(r=0;r<3;r++)
{
	for(c=0;c<2;c++)
	{
		scanf("%d",&m1[r][c]);
	}
}
printf("Entered matrix 1 is\n");
for(r=0;r<3;r++)
{
	for(c=0;c<2;c++)
	{
		printf("%d\t",m1[r][c]);
	}
	printf("\n");
}
printf("Enter the values of the matrix 2 row wise\n");
for(r=0;r<2;r++)
{
	for(c=0;c<3;c++)
	{
		scanf("%d",&m2[r][c]);
	}
}
printf("Entered matrix 2 is\n");
for(r=0;r<2;r++)
{
	for(c=0;c<3;c++)
	{
		printf("%d\t",m2[r][c]);
	}
	printf("\n");
}
mul(m1,m2);
return 0;
}

void mul(int ar1[3][2],int ar2[2][3])
{
	int r,c,m3[3][3],k;
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			m3[r][c]=0;
			for(k=0;k<2;k++)
			m3[r][c]=m3[r][c]+(ar1[r][k]*ar2[k][r]);
		}
	}
	printf("After multiplication\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("%d\t",m3[r][c]);
		}
		printf("\n");
	}
}
