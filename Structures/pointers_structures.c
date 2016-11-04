/*NOTE : priority of dot(.) operator is more than dereferencing (*) operator and address (&) operator*/
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
	struct stu s1[2],*ptr;
	ptr=s1;
	printf("Enter the student details :\n");
	for(i=0;i<2;i++)
	{
		printf("Enter the name :\n");
		scanf("%s",ptr->name);                                
		printf("Enter the roll no :\n");
		scanf("%d",&((*(ptr+i)).rollno));
		for(j=0;j<2;j++)
		{
		    printf("Enter the marks in %d subject : \n",(j+1));
		    scanf("%f",&((*(ptr+i)).marks[j]));
		}
	}
		
	printf("Student details :\n");
	for(i=0;i<2;i++)
	{
		printf("Name : %s\n",(*(ptr+i)).name);
		printf("Roll No : %d\n",(*(ptr+i)).rollno);
		for(j=0;j<2;j++)
		{
			printf("Marks : %f\n",((*(ptr+i)).marks[j]));	
		}
}

return 0;
}
