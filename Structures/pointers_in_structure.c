#include<stdio.h>
int main()
{
	struct stu {
		char name[20];
		int rollno;
		int *ptr_rollno;
		float marks;
	};
	struct stu s1, *ptr_stu;
	ptr_stu=&s1;
	ptr_stu->ptr_rollno=&ptr_stu->rollno;
	printf("Enter the sudent details :\n");
	printf("Enter the name : ");
	scanf("%s",ptr_stu->name);
	printf("Enter the roll no : ");
	scanf("%d",&ptr_stu->rollno);
	printf("Enter the marks : ");
	scanf("%f",&ptr_stu->marks);
	
	printf("Student details :\n");
	printf("Name : %s \n",ptr_stu->name);
	printf("Roll No : %d \n",*ptr_stu->ptr_rollno); /*pointer to a pointer*/
	printf("Marks : %f \n",ptr_stu->marks);
	return 0;
}
