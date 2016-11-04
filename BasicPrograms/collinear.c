#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	float x1,y1,x2,y2,x3,y3,s1,s2,s3;
	printf("Enter the x and y cordinates of 1st point \n");
	scanf("%f%f",&x1,&y1);
	printf("Enter the x and y cordinates of 2nd point \n");
	scanf("%f%f",&x2,&y2);
	printf("Enter the x and y cordinates of 3rd point \n ");
	scanf("%f%f",&x3,&y3);
	s1=abs(x2-x1)/abs(y2-y1);
	s2=abs(x3-x2)/abs(y3-y2);
	s3=abs(x3-x1)/abs(y3-y1);
	if(s1==s2&&s1==s3)
	printf("Points are Collinear \n");
	else
	printf("Points are not Collinear \n");
	return 0;
}
