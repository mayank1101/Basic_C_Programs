#include<stdio.h>
int main()
{
	struct emp{
		char name[10];
		float sal;
		int age;
	};
	struct emp em1,em2;
	printf("Enter the 2 employee's details\n");
	scanf("%s%f%d",&em1.name,&em1.sal,&em1.age);
	scanf("%s%f%d",&em2.name,&em2.sal,&em2.age);
	printf("Entered detrails are \n");
	printf("name : %s salary : %f age : %d \n",em1.name,em1.sal,em1.age);
	printf("name : %s salary : %f age : %d \n",em2.name,em2.sal,em2.age);
	return 0;
}

