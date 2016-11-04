#include<stdio.h>
#include<math.h>
int main()
{
  float x,y,r,d;
  float x1,y1;
  printf("Enter the center cordinates of the circle \n");
  scanf("%f%f",&x,&y);
  printf("Enter the radius of the circle \n");
  scanf("%f",&r);
  printf("Enter the cordinates of the point \n");
  scanf("%f%f",&x1,&y1);
  d=sqrt((x1-x)*(x1-x)+(y1-y)*(y1-y));
  if(d==r)
 printf("point lies on the circle \n");
 else if(d>r)
 printf("point lies outside the circle \n");
 else
 printf("point lies inside the circle");
return 0;
}
  
