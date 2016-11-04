#include<stdio.h>
void leapYear(int);
int main()
{
int yr;
printf("Enter the year\n");
scanf("%d",&yr);
leapYear(yr);
return 0;
}

void leapYear(int y)
{
	if((y%400==0)||(y%100!=0&&y%4==0))
	printf("%d is a Leap Year\n",y);
	else
	printf("%d is not a Leap Year\n",y);
}
