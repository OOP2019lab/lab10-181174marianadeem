//#include"Student.h"
#include"string"
#include<iostream>
using namespace std;
#ifndef STUDENT_H
#define STUDENT_H

class Student;

class course
{
	//~course();
	void addstudent(Student*);
	void addstudent_task2(course * s);
public:
	string course_name;
	string course_number;
	Student** ptrstd;
	int currentstudent;
	course();
	course(string course_name,string course_number);
	
	void operator=(const course&c)
	{
		this-> course_name=course_name;
		this-> course_number=course_number;	
		this->currentstudent=c.currentstudent;
		for(int i=0;i<c.currentstudent;i++)
		{
			this->ptrstd[i]=c.ptrstd[i];
		}
	}
	friend ostream &operator<<(ostream &output,const course& c)
	{
		output<<"course"<<c.course_name<<"-"<<c.course_number<<endl<<"name of students:"<<endl;
		for(int i=0;i<c.currentstudent;i++)
		{
			if (c.currentstudent != 0)
			{
				output << (c.ptrstd[i]);
			}
			else
				cout << "no students found" << endl;
		}output<<endl;
		return output;
	}
	void addstudent_task2(Student*);
	void removestudent(Student*);
	~course();
};
#endif



