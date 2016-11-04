#include<stdio.h>
int main()
{
	int yr;
	printf("Enter the year \n");
	scanf("%d",&yr);
	if((yr%400==0)||(yr%100!=0&&yr%4==0))
	printf("Entered year is a leap year\n");
	else
	printf("Entered year is not a Leap year");
	return 0;
}

