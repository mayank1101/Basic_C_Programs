#include<stdio.h>
#include<string.h>
int main()
{
	char list[4][10]= {
	"mayank",
	"ram",
	"raj",
	"krishna"
	};
	int flag,i,a;
	char name[10];
	printf("Enter your name\n");
	gets(name);
	flag=0;
	for(i=0;i<4;i++)
	{
		a=strcmp(&list[i][0],name);
		if(a==0)
		{
			flag=1;
			printf("Welcome you are found!!!");
			break;
		}
	}
	
	if(flag==0)
	printf("Youa are not found in the list!!!");
	return 0;
}

	
