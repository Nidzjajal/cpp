/*assignment program->2
  date->23-10-19*/

#include<iostream.h>
#include<conio.h>

class Mul
{
    public:
	void mul(int x,float y)
	{
		cout<<"multiplication of 2 no->"<<4*x<<endl;
	}
	void mul(float e,float r,float h)
	{
		cout<<"multiplication of 3 no->"<<e*r*h<<endl;
	}
	void mul(float b,float l,float t,float y)
	{
		cout<<"multiplication of 4 no->"<<b*l*t*y;
	}
};
void main()
{
	Mul M;
	clrscr();
	M.mul(5,3.4);
	M.mul(3.14,5.5,6.5);
	M.mul(5.2,4.6,5.0,6.5);
	getch();
}
