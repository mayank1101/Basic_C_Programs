
#include<stdio.h>
int main()
{
	int a=2;
	float b=2.5;
	char c='a';
	int *ptr1;
	float *ptr2;
	char *ptr3;
	ptr1=&a;
	ptr2=&b;
	ptr3=&c;
	printf("vlaue of a is %d %d %d\n",*ptr1,a,*(&a));
    printf("vlaue of b is %f %f %f\n",*ptr2,b,*(&b));
    printf("vlaue of c is %c %c %c\n",*ptr3,c,*(&c));
	return 0;
}
