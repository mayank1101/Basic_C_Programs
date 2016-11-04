//strcpy() string method
#include<stdio.h>
#include<string.h>
void copy(char *,char *);
int main()
{
	char name[15],name1[15],name2[15];
	printf("Enter your name\n");
	gets(name);
	strcpy(name1,name);
	printf("String in name1 using strcpy() fun is %s\n",name1);
    copy(name2,name);
    printf("String in name2 without using strcpy() fun is %s\n",name2);
	return 0;
}

void copy(char *t,char *s)
{
	while(*s!='\0')
	{
		*t=*s;
		s++;
		t++;
	}
	*t='\0';
}

	
