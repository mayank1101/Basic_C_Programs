/* Creating array of Structures to store students details*/
#include<stdio.h>
int main()
{
	int i,j;
	struct stu
	{
		char name[20];
		float marks[2];
		int rollno;
	};
	struct stu s1[2];
	printf("Enter the student details :\n");
	for(i=0;i<2;i++)
	{
		printf("Enter the name :\n");
		scanf("%s",&s1[i].name);
		printf("Enter the roll no :\n");
		scanf("%d",&s1[i].rollno);
		for(j=0;j<2;j++)
		{
		    printf("Enter the marks in %d subject : \n",(j+1));
		    scanf("%f",&s1[i].marks[j]);
		}
	}
		
	printf("Student details :\n");
	for(i=0;i<2;i++)
	{
		printf("Name : %s\n",s1[i].name);
		printf("Roll No : %d\n",s1[i].rollno);
		for(j=0;j<2;j++)
		{
			printf("Marks : %f\n",s1[i].marks[j]);	
		}
}
	
	return 0;
}
