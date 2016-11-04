/*passing structure member as argument*/
#include<stdio.h>
struct stu{
	char name[20];
	float marks;
	int rollno;
	};
void display(char [], float , int);	

int main()
{
	struct stu s1={"Max",100.00,10};
	display(s1.name,s1.marks,s1.rollno);
	return 0;
}

void display(char name[] , float m , int rlno)
{
	printf("Name : %s\n",name);
	printf("Marks : %f\n",m);
	printf("Roll No : %d\n",rlno);
}
