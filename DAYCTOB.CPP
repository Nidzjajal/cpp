//class to basic convertion

#include<iostream.h>
#include<conio.h>

class calender
{
	public:
	long int  y,m,w,d;
	void get()
	{
		cout<<"\nvalue of year:";cin>>y;
		cout<<"\nvalue of month:";cin>>m;
		cout<<"\nvalue of week:";cin>>w;
		cout<<"\nvalue of day:";cin>>d;


	}
	void put()
	{
		cout<<"\nyear"<<y;
		cout<<"\nmonth"<<m;
		cout<<"\nweek"<<w;
		cout<<"\nday"<<d;
	}
	operator int()
	{
		return(y*365+m*30+w*7+d);
	}

};
void main()
{
	clrscr();
	calender c;
	c.get();
	c.put();
	int se;
	se=c;
	cout<<"\n\ndays="<<se;
	getch();
}
