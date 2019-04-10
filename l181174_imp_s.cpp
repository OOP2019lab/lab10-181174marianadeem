#include"Student.h"
#include"course.h"

Student::Student()
{
	this->username="";
	this->name="";
	this->roll_number="";
	this->currentcourse=0;
	this->ptrc=new course*[2];
}

Student::~Student()
{
	for (int i = 0;i < 2;i++)
	{
		delete[]ptrc[i];
	}
	delete[]ptrc;
	delete ptrc;
}

Student::Student(string username,string name,string roll_number)
{
	this->username=username;
	this->name=name;
	this->roll_number=roll_number;
	this->currentcourse=0;
	this->ptrc=new course*[2];
}

void Student:: addcourse(course* c)
{
	bool flag=false;
	if(this->currentcourse>=2&&this->currentcourse<0)
		cout<<"course limit is reached"<<endl;
	else
		for(int i=0;i<currentcourse;i++)
		{
			if(c==ptrc[i])
				flag=true;
		}
		if(flag==true)
			cout<<"course already exists"<<endl;
		else
		{
			this->ptrc[currentcourse]=c;
		currentcourse++;
		//c->addstudent(this);
		}
}

void Student::addcourse_task2(course*c)
{
	bool flag = false;
		if(this->currentcourse>=2&&this->currentcourse<0)
			cout<<"course limit is reached"<<endl;
		else
			for(int i=0;i<currentcourse;i++)
			{
				if(c==ptrc[i])
					flag=true;
			}
			if(flag==true)
				cout<<"course already exists"<<endl;
			else
			{
				this->ptrc[currentcourse]=c;
			 currentcourse++;
			//c->addstudent_task2(this);
			}
}

void Student::dropcourse(course*c)
{
	bool flag = false;
	int place;
	for (int i = 0;i < 2;i++)
	{
		if (this->ptrc[i] == c)
		{
			place = i;
			ptrc[place] = ptrc[place];
			currentcourse--;
			flag = true;
		}
		else
			cout << "not registered" << endl;
	}
}

