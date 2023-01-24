#include<iostream.h>
#include<conio.h>

class demo
{
	public:
	int x,y;
	friend istream &operator >>(istream &in,demo &d)
	{
		cout<<"enter element:";
		in>>d.x;
		cout<<"enter element:";
		in>>d.y;
		return in;
	}
	friend ostream &operator<<(ostream &out,demo &d)
	{
		out<<d.x;
		out<<d.y;
		return out;
	}
};
void main()
{
	demo d1;
	cout<<"insert\n";
	cin>>d1;
	cout<<d1;
	getch();
}