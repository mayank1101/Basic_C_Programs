/*Passing array of structures as argument */
#include<stdio.h>
struct stu {
	char name[20];
	int rollno;
	float marks;
};

void display(struct stu );
void change_marks(struct stu []);

int main()
{
	int i;
	struct stu s1[3]={
		{"John",12,98.89},
		{"Max",34,99.90},
		{"Joseph",67,100.00}
	};
	change_marks(s1);
	
	for(i=0;i<2;i++)
	display(s1[i]);
	
	return 0;
}


void change_marks(struct stu s[])
{
	int i;
	for(i=0;i<2;i++)
	s[i].marks+=10;
}

void display(struct stu s)
{
	printf("Student details :\n");
	printf("Name : %s\n",s.name);
	printf("Roll No : %d\n",s.rollno);
	printf("Marks : %f\n",s.marks);
}	
