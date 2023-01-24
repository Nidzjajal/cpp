#include<iostream.h>
#include<conio.h>

class unary
{
	int x,y;
	public:
	unary()
	{
	       x=10;y=20;
	}
	void put()
	{
		cout<<"x="<<x<<endl;
		cout<<"y="<<y;
	}
	void operator ++()
	{
		x++;
		y++;
	}

};
void main()
{
	unary u;
	u++;
	u.put();
	getch();
}