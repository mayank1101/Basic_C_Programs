/*Passing entire 2D array into the function*/
#include<stdio.h>
void display(int p[][2],int,int);
int main()
{
	
	int arr[3][2]={{1,2},{3,4},{5,6}};
	display(arr,3,2);
	return 0;
}

void display(int p[][2],int r, int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",*(*(p+i)+j));
		}
		printf("\n");
	}
}

