#include<iostream.h>
#include<conio.h>

class calender               //class is create
{
	long int y ,m ,w ,d;
	public:
	calender()                            //default constructor
	{
	}
	calender(long int second)
	{
		int diff;
		y=second/365;
		diff=second%365;
		m=diff/30;
		diff=diff%30;
		w=diff/7;
		diff=diff%7;
		d=diff;

	}
     /*	void get()
	{
		cout<<"\nenter value of hour:";
		cin>>h;
		cout<<"\nenter value of minute:";
		cin>>m;
		cout<<"\nenter value of second:";
		cin>>s;
	}*/
	void put()
	{
		cout<<"\nyear:"<<y;
		cout<<"\nmonth:"<<m;
		cout<<"\nweek:"<<w;
		cout<<"\nday:"<<d;
	}

};
void main()
{
	clrscr();
	long int second;
	cout<<"enter day:";
	cin>>second;
	calender c;
	c=second;
	c.put();
	getch();

}