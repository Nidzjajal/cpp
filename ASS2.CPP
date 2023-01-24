/*assignment program->2
  date->23-10-19*/

#include<iostream.h>
#include<conio.h>

class Area
{
    public:
	void area(int x)
	{
		cout<<"area of square->"<<4*x<<endl;
	}
	void area(float pi,int r)
	{
		cout<<"area of circle->"<<pi*r*r<<endl;
	}
	void area(float b,float h,float t)
	{
		cout<<"area of triangle->"<<(1.0/2.0*b*h);
	}
};
void main()
{
	Area A;
	clrscr();
	A.area(5);
	A.area(3.14,5);
	A.area(5.2,4.6,0.0);
	getch();

}