#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5},i;
	for(i=0;i<5;i++)
	{
		printf("value of arr[%d]  is %d\t\n",i,*(arr+i));
		printf("value of arr[%d]  is %d\t\n",i,*(i+arr));
		printf("value of arr[%d]  is %d\t\n",i,i[arr]);
		printf("value of arr[%d]  is %d\t\n",i,arr[i]);
		printf("address of arr[%d]  is %p\t\n",i,(arr+i));
	}
	return 0;
}

