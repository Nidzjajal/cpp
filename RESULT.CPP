#include<iostream.h>
#include<conio.h>

class practical;
class result;

class student
{
	public:
	int roll,s1,s2,s3,s4;
	char name[10];

};
class practical
{
	public:
	int cpp;

};
class result :public student,public practical
{
	public:
	int total;
	float per;

	void get()
	{
		cout<<"\nenter student roll no->";
		cin>>roll;
		cout<<"\nenter student name->";
		cin>>name;
		cout<<"\nenter mark of s1->";
		cin>>s1;
		cout<<"\nenter mark of s2->";
		cin>>s2;
		cout<<"\nenter mark of s3->";
		cin>>s3;
		cout<<"\nenter mark of s4->";
		cin>>s4;
		cout<<"\nenter marks of practical subject (cpp)->";
		cin>>cpp;
		total=s1+s2+s3+s4+cpp;
		per=total/5.0;
	}
	void put()
	{
		cout<<"\nenter student roll no->"<<roll;
		cout<<"\nenter student name->"<<name;
		cout<<"\nenter mark of s1->"<<s1;
		cout<<"\nenter mark of s2->"<<s2;
		cout<<"\nenter mark of s3->"<<s3;
		cout<<"\nenter mark of s4->"<<s4;
		cout<<"\nenter practical subject (cpp)->"<<cpp;
		cout<<"\n total->"<<total;
		cout<<"\npercentage->"<<per;
	}

};
void main()
{
	clrscr();
	result r;
	r.get();
	r.put();
	getch();
}





