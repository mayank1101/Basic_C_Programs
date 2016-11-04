#include<stdio.h>
int main()
{
int num,choice,i,count=0;
unsigned long fact=1;
int r=0;
do
{
      printf("1. FACTORIAL OF NUMBER\n");
      printf("2. PRIME OR NOT\n");
      printf("3. ODD OR EVEN\n");
      printf("4. EXIT\n");
      printf("\nEnter your chice \n");
      scanf("%d",&choice);
switch(choice)
{
	case 1 :
	{
		
	    printf("Enter the number\n");
	    scanf("%d",&num);
	    for(i=num;i>=1;i--)
	    {
		    fact*=i;
		}
	    printf("Factorial of %d is %ld\n",num,fact);
	    break;
	}
	case 2 :
	{
		printf("Enter the number\n");
		scanf("%d",&num);
		for(i=1;i<=num;i++)
		{
			if(num%i==0)
			count++;
		}
		if(count==2)
		{
			printf("%d is Prime Number \n",num);
		}
		else
		{
			printf("Not a Prime Number\n");
		}
		break;
	}
	case 3 :
	{
		printf("Enter the Number\n");
		scanf("%d",&num);
		if(num%2==0)
		{
			printf("%d is Even\n",num);
		}
		else
		printf("%d is Odd\n",num);
		break;
	}
	case 4 :
	{
		return(0);
	}
	
	default :
	{
		printf("Please enter correct choice\n");
	}
}
printf("\nDo you wish to continue ? \n");
printf("1 for YES or 0 for No\n");
scanf("%d",&r);
}while(r==1);
return 0;
}

	
