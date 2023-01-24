#include<iostream.h>
#include<conio.h>

class student
{
	public:
	int roll;
	char name[10];

};
class test:public student
{
	public:
	int s1,s2,s3;
};
class result:public test
{
	public:
	int total;
	float per;
	void get()
	{
		cout<<"\nenter student roll->";cin>>roll;
		cout<<"\nenter student name->";cin>>name;
		cout<<"\nenter mark of sub 1->";cin>>s1;
		cout<<"\nenter mark of sub 2->";cin>>s2;
		cout<<"\nenter mark of sub 3->";cin>>s3;
		total=s1+s2+s3;
		per=total/3.0;
	}
	void put()
	{
		cout<<"\nstudent roll->"<<roll;
		cout<<"\n student name->"<<name;
		cout<<"\n mark of sub 1->"<<s1;
		cout<<"\n mark of sub 2->"<<s2;
		cout<<"\n mark of sub 3->"<<s3;
		cout<<"\ntotal ->"<<total;
		cout<<"\nper->"<<per;
	}
	void process()
	{
		if(per<28)
		{
			cout<<"\nstudent is FAIL";
		}
		else
			cout<<"\nstudent is PASS";
	}
};
void main()
{
	clrscr();
	result r;
	r.get();
	r.put();
	r.process();
	getch();

}