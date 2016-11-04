/*calcuate the day on 1st January of any year if it was Monday on 01/01/01*/
#include<stdio.h>
int main()
{
  int yr,leapdays,fd;
  long normaldays,totaldays;
  printf("Enter the year \n");
  scanf("%d",&yr);
  normaldays=(yr-1)*365;
  leapdays=(yr-1)/4-(yr-1)/100+(yr-1)/400;
  totaldays=normaldays+leapdays;
  fd=totaldays%7;
  if(fd==0)
  printf("Monday\n");
  if(fd==1)
  printf("Tuesday\n");
  if(fd==2)
  printf("Wednesday \n");
  if(fd==3)
  printf("Thursday\n");
  if(fd==4)
  printf("Friday\n");
  if(fd==5)
  printf("Saturday\n");
  if(fd==6)
  printf("Sunday\n");
  return 0;
}
	  
