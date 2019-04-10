// l181174.cpp : Defines the entry point for the console application.
//

#include"Student.h"
#include"course.h"
#include<string>
 
int main()
{
	Student s1("1","Anum","11-154");
	Student s2("3","sara","12-6462");
	Student s3("4","sana"," 11-4531");
	Student s4("5","zara"," 12-4342");
	Student s5("2" ,"Hira","11-5940");
	course c1("opp","cs102");
	course c2("pf", "cs101");
	course c3("ai", "cs365");
	cout << s1;
	cout << c1;
	cout << c2;
	c1.addstudent_task2(&s1);
	c2.addstudent_task2(&s1);
	c3.addstudent_task2(&s1);
	s5.addcourse_task2(&c1);
	//system("pause");
	system("pause");
	return 0;
}