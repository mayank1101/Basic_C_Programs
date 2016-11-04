#include<stdio.h>
#include<math.h>
int main()
{
int arr[] = {-6,-12,8,13,11,6,7,2,-6,-9,-10,11,10,9,2};
int mean=0,i,count=0;
float result,sd[14];
for(i=0;i<15;i++)
{
	mean+=*(arr+i);
	count++;
}
result = mean/count;
printf("Mean is %f\n",result);
for(i=0;i<15;i++)
{
	sd[i]=sqrt(pow(((*arr+i)-(mean)),2))/(count);
}
for(i=0;i<15;i++)
printf("Standard Deviation of %d is %f\n",arr[i],sd[i]);
return 0;
}
