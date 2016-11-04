/*passing pointer to structure as argument
* NOTE :such passing is useful if size of the structure is very big
*       any changes made to structure inside called function will
*       be reflected in actuall structure*/
#include<stdio.h>
#include<stdio.h>
struct stu{
	char name[20];
	float marks;
	int rollno;
	};
void display(struct stu *);	
void inc_marks(struct stu *);
int main()
{
	struct stu s1={"Max",100.00,10};
	inc_marks(&s1);
	display(&s1);
	return 0;
}

void inc_marks(struct stu *ptr)
{
	(ptr->marks)++;  /*this will increase the marks and this change will be reflected in actuall structure also*/
}

void display(struct stu *ptr)
{
	printf("Name : %s\n",ptr->name);
	printf("Marks : %f\n",ptr->marks);
	printf("Roll No : %d\n",ptr->rollno);
}
