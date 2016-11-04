/*Returning pointer to structure from a function*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stu{
	char name[20];
	int rollno;
	float marks;
};
void display(struct stu *);
struct stu *fun();
struct stu *stuptr;
int  main()
{
	struct stu *s1;
	s1 = fun();
	display(s1);
	return 0;
}

struct stu *fun()
{
	struct stu *ptr;
	ptr=(struct stu *)malloc(sizeof(struct stu));
	strcpy(ptr->name,"Joseph");
	ptr->rollno=12;
	ptr->marks=100.00;
	return ptr;
}

void display(struct stu *s)
{
	printf("Student details :\n");
	printf("Name : %s\n",s->name);
	printf("Roll No : %d\n",s->rollno);
	printf("Marks : %f\n",s->marks);
}
