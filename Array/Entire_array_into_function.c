/*Passing an aaray into  function and reversing its values*/
#include<stdio.h>
void reverse(int ar[]);
int main()
{
	int arr[10];
	int i;
	printf("Enter the values of the array \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	reverse(arr);
	return 0;
}

void reverse(int ar[])
{
	int temp;
	int i,j;
	for(i=0,j=4;i<j;i++,j--)
	{
		temp=ar[j];
		ar[j]=ar[i];
		ar[i]=temp;
	}
	printf("After reversing the array\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",ar[i]);
	}
}

	
