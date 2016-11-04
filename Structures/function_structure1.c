/*Passing structure variable as argument*/
#include<stdio.h>
struct stu{
	char name[20];
	float marks;
	int rollno;
	};
void display(struct stu);	

int main()
{
	struct stu s1={"Max",100.00,10};
	display(s1);
	return 0;
}

void display(struct stu s)
{
	printf("Name : %s\n",s.name);
	printf("Marks : %f\n",s.marks);
	printf("Roll No : %d\n",s.rollno);
}
