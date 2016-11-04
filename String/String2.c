//strlen() methods
#include<stdio.h>
#include<string.h>
int len(char *ptr);
int main()
{
char name[10];
int l,result;
printf("Enter your name\n");
gets(name);
l=strlen(name);
result=len(name);
printf("Lengthy of string %s  is %d using strlen() fun \n",name,l);
printf("Lengthy of string %s  is %d without using  fun \n",name,result);
return 0;
}

int len(char *ptr)
{
	int l=0;
	while(*ptr!='\0')
	{
		l++;
		ptr++;
	}
	return l;
}


