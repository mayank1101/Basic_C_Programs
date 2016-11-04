//concat() and strcmp() functions 
#include<stdio.h>
#include<string.h>
int  main()
{
	char fname[20],lname[12];
	char string1[15]="Hello";
	char string2[15]="World";
	int value;
	printf("enter the first name :\n");
	gets(fname);
	printf("enter the last name :\n");
	gets(lname);
	strcat(fname,lname); //concatination function
	printf("Your name is %s\n",fname);
	printf("String1 : %s\n",string1);
	printf("String2 : %s\n",string2);
	value=strcmp(string1,string2);
	if(value==0)
	printf("Strings are of equal length");
	if(value<0)
	printf("String1 < string2");
	if(value>0)
	printf("String1 > string2");
	return 0;
}

