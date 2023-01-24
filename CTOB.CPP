//class to basic convertion

#include<iostream.h>
#include<conio.h>

class Time
{
	public:
	long int  h,m,s;
	void get()
	{
		cout<<"\nvalue of hours:";cin>>h;
		cout<<"\nvalue of minute:";cin>>m;
		cout<<"\nvalue of second:";cin>>s;

	}
	void put()
	{
		cout<<"\nhours"<<h;
		cout<<"\nminute"<<m;
		cout<<"\nsecond"<<s;
	}
	operator int()
	{
		return(h*3600+m*60+s);
	}

};
void main()
{
	Time t;
	t.get();
	t.put();
	int se;
	se=t;
	cout<<"\n second="<<se;
	getch();
}
