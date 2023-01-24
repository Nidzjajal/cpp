#include<iostream.h>
#include<conio.h>

class unary
{

	public:
		int x;
	unary()
	{
	       x=10;
	}
	void put()
	{
		cout<<"x="<<x<<endl;

	}
	friend void operator -- (unary &u);

	friend void operator ++(unary &u1);



};
void operator ++(unary &u)
{
	u.x++;

}
void operator --(unary &u1)
{
	u1.x--;

}
void main()
{
	clrscr();
	unary u,u1;
	u++;
	u.put();

	u1--;
	u1.put();
	getch();
}