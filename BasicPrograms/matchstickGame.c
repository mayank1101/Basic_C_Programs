#include<stdio.h>
int main()
{
int p,c,m=21;
while(1)
{
printf("NUmber of match sticks left %d \t ",m);
printf("Pick up 1,2,3 or 4 match sticks \n");
scanf("%d",&p);
if(p>4||p<1)
    continue;
    m=m-p;
    printf("Number of match sticks left %d \t",m);
    c=5-p;
    printf("Computer picks up %d match sticks\n",c);
    m=m-c;
    if(m==1)
{
	printf("Number of match sticks left %d \t",m);
    printf("\nYou lost the Game \n");
    break;
}
}
return 0;
}

