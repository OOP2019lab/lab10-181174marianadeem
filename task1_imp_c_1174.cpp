#include"Student.h"
#include"course.h"

course::course()
{
	this->course_name = "";
	this->course_number = "";
	this->ptrstd = new Student*[4];
	this->currentstudent = 0;
}

course::course(string course_name, string course_number)
{
	this->course_name = course_name;
	this->course_number = course_number;
	this->ptrstd = new Student*[4];
	this->currentstudent = 0;
}

void course::addstudent(Student *s)
{
	bool flag = false;
	if (this->currentstudent >= 4 && this->currentstudent < 0)
		cout << "no more students can be added further" << endl;
	else
	{
		for (int i = 0;i < currentstudent;i++)
		{
			if (s == (ptrstd[i]))
				flag = true;
		}
		if (flag == true)
			cout << "student already exists" << endl;
		else
		{
			this->ptrstd[currentstudent] = s;
			currentstudent++;
			//	s->addcourse(this);
		}
	}
}

course::~course()
{
	for (int i = 0;i < 4;i++)
	{
		delete[]ptrstd[i];
	}
	//delete[]ptrstd;
	delete[]ptrstd;
	delete ptrstd;
}

void course::removestudent(Student*s)
{
	bool flag = false;
	int place;
	for (int i = 0;i < 2;i++)
	{
		if (ptrstd[i] == s)
		{
			flag = true;
			place = i;
			if (place > 2)
			{
				ptrstd[place] = ptrstd[place + 1];
				currentstudent--;
			}
		}
	}
}
