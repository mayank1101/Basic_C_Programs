//this program can be done using 2D char array ;but will require 10 exchanges
#include<stdio.h>
#include<string.h>
int main()
{
	char *name[4]={    //pointer array stores base address of each name 
	"mayank",
	"shubham",
	"Mohan",
	"Ravi"
		};
	char *temp;
	printf("Original %s %s \n",*(name+1),*(name+3));
		temp=*(name+1);
		*(name+1)=*(name+3);
		*(name+3)=temp;
	printf("New %s %s \n",*(name+1),*(name+3));
	return 0;
}
	
