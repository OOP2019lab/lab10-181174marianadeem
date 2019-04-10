#include"course.h"
#include<string>
#include<iostream>
using namespace std;
#ifndef COURSE_H
#define COURSE_H

class course;

class Student
{
	void dropcourse(course*);
//	~Student();
public:
	string username;
	string name;
	string roll_number;
	course** ptrc;
	int currentcourse;
	Student();
	Student(string username,string name,string roll_number);
	void addcourse(course *);
	void addcourse_task2(course*);
	void operator=(const Student&c)
	{
		this->username=c.username;
		this->name=c.name;
		this->roll_number=roll_number;
		this->currentcourse=c.currentcourse;
		for(int i=0;i<c.currentcourse;i++)
		{
			this->ptrc[i]=ptrc[i];
		}
	}
	friend ostream &operator<<(ostream &output,const Student &s)
	{
		output<<"student:"<<endl<<"username:"<<s.username<<"name:"<<s.name<<endl<<"courses:"<<endl;
		for(int i=0,j=0;i<s.currentcourse;i++,j++)
		{
			output<<(s.ptrc[i][j]);
		}output<<endl;
		return output;
	}
	~Student();
};
#endif

