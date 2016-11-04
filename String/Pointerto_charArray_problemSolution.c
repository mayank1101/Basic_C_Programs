//problem with pointer to char array is that we can not take value of it throgh scanf
//2D char array can be used to take value through scanf
//overcome this problem using dynamic memory allocation 
#include<stdio.h>
#include<stdlib.h> //contains malloc,calloc,and relloc prototype
#include<string.h>
int main()
{
	char name[4][10];
	char *n[6],*p[6];
	int i,len[4];
	printf("Enter 4 names\n");
	for(i=0;i<4;i++)
	scanf("%s",&name[i][0]);
	for(i=0;i<4;i++)
	{
		len[i]=strlen(&name[i][0]);
		*(p+i)=(char *)malloc(*(len+i)+1); // +1 for accomodating '\0'
		strcpy(*(p+i),&(*(*(name+i)+0)));
		*(n+i)=*(p+i);
	}
	printf("\n");
	for(i=0;i<4;i++)
	printf("%s\n",*(n+i));
	return 0;
}

	
