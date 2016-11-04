#include<stdio.h>
int main()
{
	int arr[][9]={
		{5,3,4,6,7,8,9,1,2},
		{6,7,2,1,9,5,3,4,8},
		{1,9,8,3,4,2,5,6,7},
		{8,5,9,7,6,1,4,2,3},
		{4,2,6,8,5,3,7,9,1},
		{7,1,3,9,2,4,8,5,6},
		{9,6,1,5,3,7,2,8,4},
		{2,8,7,4,1,9,6,3,5},
		{3,4,5,2,8,6,1,7,9}
		};
		
		int i,j,sum;
		for(i=0;i<9;i++)
		{
			sum=0;
			for(j=0;j<9;j++)
			{
				sum+=arr[i][j];
			}
		if(sum!=45)
		{
			printf("Problem in row \n");
			return 1;
		}
	}
		printf("All rows are correct\n");
		
		for(i=0;i<9;i++)
		{
			sum=0;
			for(j=0;j<9;j++)
			{
				sum+=arr[j][i];
			}
			
		if(sum!=45)
		{
			printf("Problem in column \n");
			return 2;
		}
	}
		printf("All columns are correct\n");
		return 0;
}

