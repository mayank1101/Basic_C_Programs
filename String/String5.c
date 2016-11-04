#include<stdio.h>
void concat(char *, char *);
int main()
{
	char fname[50],lname[20];
	printf("enter the first name :\n");
	gets(fname);
	printf("enter the last name :\n");
	gets(lname);
	concat(fname,lname);
	printf("Your name is %s\n",fname);
	return 0;
}

void concat(char *t, char *s)
{
	int i=0,j=0;
	while(*(t+i)!='\0')
	i++;
	printf("Length is %d\n",i);
	while(*(s+j)!='\0')
	{
		*(t+i)=*(s+j);
		i++;
		j++;
	}
	*(t+i)='\0';
}


