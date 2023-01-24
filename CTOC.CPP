//class to class convertion

#include<iostream.h>
#include<conio.h>
class day;
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


};
class day
{
	public:
	long int days;
       /*	operator int (calender c)
	{
		return(c.y*365+c.m*30+c.w*7+c.d);
	}*/
       day()
	{
	}
	day(calender c)
	{
		days=c.y*365+c.m*30+c.w*7+c.d;
	}
	void put()
	{
		cout<<"\n day="<<days;
	}
};
void main()
{
	clrscr();
	calender c;
	c.get();
	day d1;
	d1=c;
	d1.put();

	getch();
}
