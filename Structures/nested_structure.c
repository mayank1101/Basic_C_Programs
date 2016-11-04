/*NOTE
 if we define a inner structure outside its definition must be before the definition of outer structure
 ex-
 struct date {
      int day;
      int month;
      int year;
  };
 
 struct student {
      char name[20];
      int rollno;
      struct date birthdate; 
  }; 
  */
#include<stdio.h>
int main()
{
	 struct time {
	     int sec;
	     int min;
	     int hour;
	 
	 };
	 struct date {
      int day;
      int month;
      int year;
      struct time t;
  };
 
 struct student {
      char name[20];
      int rollno;
      struct date birthdate; 
  };  
struct student s1;
s1.birthdate.t.hour=12;
printf("Time hour value is %d \n",s1.birthdate.t.hour); /*we can access structure within structure*/
return 0;
}

