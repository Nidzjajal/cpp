#include<iostream.h>
#include<conio.h>

class unary
{
	int x;
	public:
	unary()
	{
	       x=10;
	}
	void put()
	{
		cout<<"x="<<x<<endl;

	}
	void operator - ()
	{
		x=-x;

	}

};
void main()
{
	clrscr();
	unary u;
	-u;
	u.put();
	getch();
}