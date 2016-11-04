#include<stdio.h>
#include<math.h>
float d1(int,int,int,int);
float d2(int,int,int,int);
float d3(int,int,int,int);
float d1_1(int,int,int,int);
float d2_2(int,int,int,int);
float d3_3(int,int,int,int);
float area(float,float,float);
float area_1(float,float,float);
float area_2(float,float,float);
float area_3(float,float,float);
int main()
{
	int x1,y1,x2,y2,x3,y3,a,b;
	float r1,r2,r3,r1_1,r2_2,r3_3;
	float ar1_1,ar2_2,ar3_3,total_ar,ar;
	printf("Enter the three co ordinates to calculate area of the triangle \n");
	scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
	printf("Enter the co ordinates of the points to check whether point lie inside the triange or not\n");
	scanf("%d%d",&a,&b);
	r1=d1(x1,y1,x2,y2);
	r2=d2(x2,y2,x3,y3);
	r3=d3(x3,y3,x1,y1);
	r1_1=d1_1(x1,y1,a,b);
	r2_2=d2_2(x2,y2,a,b);
	r3_3=d3_3(x3,y3,a,b);
	ar=area(r1,r2,r3);
	ar1_1=area_1(r1,r1_1,r2_2);
	ar2_2=area_2(r2,r2_2,r3_3);
	ar3_3=area_3(r3,r1_1,r3_3);
	total_ar=ar1_1+ar2_2+ar3_3;
	if((total_ar-ar)<=0.0009)
	printf("Points %d\t%d\t lie inside the triangle\t\n",a,b);
	else
	printf("Points %d\t%d\t does not lie inside the triangle\t\n",a,b);
	return 0;
}

float d1(int x1,int y1, int x2, int y2)
{
	float d;
	d=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
	return d;
}

float d2(int x2,int y2,int x3,int y3)
{
	float d;
	d=sqrt(((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2)));
	return d;
}

float d3(int x3,int y3,int x1,int y1)
{
	float d;
	d=sqrt(((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1)));
	return d;
}

float d1_1(int x1,int y1,int a,int b)
{
	float d;
	d=sqrt(((x1-a)*(x1-a))+((y1-b)*(y1-b)));
	return d;
}

float d2_2(int x2,int y2,int a,int b)
{
	float d;
	d=sqrt(((x2-a)*(x2-a))+((y2-b)*(y2-b)));
	return d;
}

float d3_3(int x3,int y3,int a,int b)
{
	 float d;
	 d=sqrt(((x3-a)*(x3-a))+((y3-b)*(y3-b)));
	 return d;
 }
 
float area(float r1,float r2,float r3)
{
	float s,a;
	s=(r1+r2+r3)/2;
	a=sqrt((s-r1)*(s-r2)*(s-r3));
	return a;
}

float area_1(float r1, float r1_1,float r2_2)
{
	float s,a;
	s=(r1+r1_1+r2_2)/2;
	a=sqrt((s-r1)*(s-r1_1)*(s-r2_2));
	return a;
}

float area_2(float r2,float r2_2,float r3_3)
{
	float s,a;
	s=(r2+r2_2+r3_3)/2;
	a=sqrt((s-r2)*(s-r2_2)*(s-r3_3));
	return a;
}

float area_3(float r3,float r1_1,float r3_3)
{
	float s,a;
	s=(r3+r1_1+r3_3)/2;
	a=sqrt((s-r3)*(s-r1_1)*(s-r3_3));
	return a;
}
