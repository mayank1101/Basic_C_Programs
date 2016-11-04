#include<stdio.h>
int main()
{
int n,c;
printf("Enter the Class obtained by the Student\n");
scanf("%d",&c);
printf("Enter the number of subjects studen failed in\n");
scanf("%d",&n);
switch(c)
{
	case 1 :
	{
		if(n>3)
		{
			printf("No GRACE MARKS\n");
		}
		else
		printf("GRACE of 5 MARKS\n");
		break;
	}
	case 2 :
	{
		if(n>2)
		printf("NO GRACE MARKS");
		else
		printf("GRACE of 2 MARKS\n");
		break;
	}
	case 3 :
	{
		if(n>1)
		printf("NO GRACE MARKS\n");
		else
		printf("GRACE of 5 MARKS\n");
		break;
	}
	default :
	{
		printf("Enter the CORRECT class obtained by the Student\n");
	}
}
return 0;
}
