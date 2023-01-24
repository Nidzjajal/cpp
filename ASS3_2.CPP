#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class student
{
	public:
	char s_name[10];
	int s_roll;
	void get_student()
	{
		cout<<"\nenter student roll->";
		cin>>s_roll;
		cout<<"\nenter student name->";
		cin>>s_name;

	}

};
class test:public student
{
	public:
	int s1,s2;
	void get_test()
	{
		cout<<"\nenter mark of s1->";
		cin>>s1;
		cout<<"\nenter mark of s2->";
		cin>>s2;

	}
};
class result:public test
{
	public:
	int total;
	void process()
	{
		total=s1+s2;
	}
	void put()
	{
		cout<<"\nroll:"<<s_roll;
		cout<<"\nname:"<<s_name;
		cout<<"\ns1:"<<s1;
		cout<<"\ns2:"<<s2;
		cout<<"\ntotal:"<<total;
	}
};
void main()
{
	clrscr();
	result r;
	r.get_student();
	r.get_test();
	r.process();
	r.put();
	getch();
}