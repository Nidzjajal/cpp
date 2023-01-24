#include<iostream.h>
#include<conio.h>

class currency               //class is create
{
	long int tw_th,fi_h,tw_h,o_h,f,tw,ten,five,one;
	public:
	currency()                            //default constructor
	{
	}
	currency(long int second)
	{
		int diff;
		tw_th=second/2000;
		diff=second%2000;
		fi_h=diff/500;
		diff=diff%500;
		tw_h=diff/200;
		diff=diff%200;
		o_h=diff/100;
		diff=diff%100;
		f=diff/50;
		diff=diff%50;
		tw=diff/20;
		diff=diff%20;
		ten=diff/10;
		diff=diff%10;
		five=diff/5;
		diff=diff%5;
		one=diff;

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
		cout<<"\ntwo thousand note:"<<tw_th;
		cout<<"\nfive hundered note:"<<fi_h;
		cout<<"\ntwo hundered note:"<<tw_h;
		cout<<"\none hundered note:"<<o_h;
		cout<<"\nfifty note:"<<f;
		cout<<"\ntwenty note:"<<tw;
		cout<<"\nten note:"<<ten;
		cout<<"\nfive note:"<<five;
		cout<<"\none note:"<<one;
	}

};
void main()
{
	clrscr();
	long int second;
	cout<<"enter paisa:";
	cin>>second;
	currency c;
	c=second;
	c.put();
	getch();

}