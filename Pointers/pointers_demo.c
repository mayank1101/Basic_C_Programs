#include<stdio.h>
int main()
{
	int i=2,j=3;
	int *ptr;
	ptr=&j;
	printf("value of i is %d and its address is %p\n",i,(void *)&i);
	printf("value of j is %d and its address is %p\n",j,(void *)&j);
	printf("value of ptr is %p and its address is %p\n",ptr,(void *)&ptr);
	printf("ptr points to value %d \n",*ptr);
	return 0;
}
