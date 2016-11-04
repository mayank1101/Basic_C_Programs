#include<stdio.h>
int main()
{
	int l0=1189,l1,l2,l3,l4;
	int b0=841,b1,b2,b3,b4;
	printf("Size of paper A0 Length %d AND Breadth %d\n",l0,b0);
	l1=b0;
	b1=l0/2;
	printf("Size of paper A1 Length %d AND Breadth %d\n",l1,b1);
	l2=b1;
	b2=l1/2;
    printf("Size of paper A2 Length %d AND Breadth %d\n",l2,l2);
	l3=b2;
	b3=l2/2;
	printf("Size of paper A3 Length %d AND Breadth %d\n",l3,b3);
	l4=b3;
	b4=l3/2;
	printf("Size of paper A4 Length %d AND Breadth %d\n",l4,b4);
	return 0;
}

	
