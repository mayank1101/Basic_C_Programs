//simple string demo
#include<stdio.h>
#include<string.h>
int main()
{
char arr[] = {'m','a','y','a','n','k','\0'};
char name [12]; 
int i;
char *ptr;
printf("Enter your name\n");
scanf("%s",name);
while(arr[i]!='\0') //display method
{
	printf("%c",arr[i]);
	i++;
}
printf("\n");
ptr=name;
while(*ptr!='\0') //display method using pointer
{
	printf("%c",*ptr);
	ptr++;
}
printf("\n");
return 0;
}
