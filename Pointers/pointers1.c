#include<stdio.h>
int main()
{
	int a=2;
	float b=2.5;
	char c='a';
	int *ptr1,**pptr1;
	float *ptr2,**pptr2;
	char *ptr3,**pptr3;
	ptr1=&a;
	ptr2=&b;
	ptr3=&c;
	pptr1=&ptr1;
	pptr2=&ptr2;
	pptr3=&ptr3;	
	printf("vlaue of a is %d %d %d\n",*ptr1,a,*(&a));
	printf("address of a is %p %p %p\n",ptr1,&a,*(pptr1));
    printf("vlaue of b is %f %f %f\n",*ptr2,b,*(&b));
    printf("address of b is %p %p %p\n",ptr2,&b,*(pptr2));
    printf("vlaue of c is %c %c %c\n",*ptr3,c,*(&c));
    printf("address of c is %p %p %p\n",ptr3,&c,*(pptr3));
	return 0;
}
