/*Returning Structure variable from function*/
#include<stdio.h>
struct stu {
  char name[10];
  int rollno;
  float marks;
};
void display(struct stu);
struct stu change(struct stu);
int main()
{
  struct stu s1={"Max",10,99.99};
  struct stu s2;
  s2 = change(s1);
  display(s2);
  return 0;
}

struct stu change(struct stu s)
{
  s.rollno +=5;
  s.marks+=1;
  return s;
}

void display(struct stu s)
{
  printf("Student Details :\n");
  printf("Name : %s\n",s.name);
  printf("Roll No : %d\n",s.rollno);
  printf("Marks : %f \n",s.marks);
}

  
