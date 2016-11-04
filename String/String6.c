#include<stdio.h>
void compare(char *, char *);
int main()
{
	char str1[10],str2[10];
	printf("Enter first string \n");
	gets(str1);
	printf("Enter second string \n");
	gets(str2);
	compare(str1,str2);
	return 0;
}

void compare(char *s1, char *s2)
{
	int i=0,flag=0;;
	while(*(s1+i)!='\0' && *(s2+i)!='\0' )
	{
		if((*(s1+i))!=(*(s2+i)))
		flag=1;
		break;
	}
	if(flag==1)
	printf("Both strings are not of equal length\n");
	if(flag==0)
	printf("Both strings are of equal length\n");
}
