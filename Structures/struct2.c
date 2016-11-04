#include<stdio.h>
int main()
{
	struct stu{
		char name[10];
		int age;
		float marks;
	};
	struct stu s1={"max",13,90.0};
	struct stu s2={"tyson",12,98.0};
	struct stu s3={"john",11,100.0};
	printf("Entered detrails are \n");
	printf("name : %s marks : %.2f age : %d \n",s1.name,s1.marks,s1.age);
	printf("name : %s marks : %.2f age : %d \n",s2.name,s2.marks,s2.age);
	printf("name : %s marks : %.2f age : %d \n",s3.name,s3.marks,s3.age);
	return 0;
}
