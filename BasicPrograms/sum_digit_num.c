#include<stdio.h>
int main()
{
  int n,rn,d,sum=0;
  printf("Enter the four digit number \n");
  scanf("%d",&n);
  d=n%10;
  sum+=d;
  rn=n/10;

  d=rn%10;
  sum+=d;
  rn=rn/10;

  d=rn%10;
  sum+=d;
  rn=rn/10;

  d=rn;
  sum+=d;

  printf("Sum of digits of number is %d\t",sum);
  return 0;
}
