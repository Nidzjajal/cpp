#include<iostream.h>
#include<conio.h>

class Time               //class is create
{
	long int h,m,s;
	public:
	Time()                            //default constructor
	{
	}
	Time(long int second)
	{
		int diff;
		h=second/3600;
		diff=second%3600;
		m=diff/60;
		diff=diff%60;
		s=diff;
	}
	void get()
	{
		cout<<"\nenter value of hour:";
		cin>>h;
		cout<<"\nenter value of minute:";
		cin>>m;
		cout<<"\nenter value of second:";
		cin>>s;
	}
	void put()
	{
		cout<<"\nhour:"<<h;
		cout<<"\nminute:"<<m;
		cout<<"\nsecond:"<<s;
	}

};
void main()
{
	clrscr();
	long int second;
	cout<<"enter second:";
	cin>>second;
	Time t;
	t=second;
	t.put();
	getch();

}