#include<stdio.h>
int main()
{
	struct book{
		char name[10];
		float price;
		int pages;
	}b1,b2;
	printf("Enter the 2 books details\n");
	scanf("%s%f%d",&b1.name,&b1.price,&b1.pages);
	scanf("%s%f%d",&b2.name,&b2.price,&b2.pages);
	printf("Entered detrails are \n");
	printf("name : %s price : %f pages : %d \n",b1.name,b1.price,b1.pages);
	printf("name : %s price : %f pages : %d \n",b2.name,b2.price,b2.pages);
	return 0;
}


