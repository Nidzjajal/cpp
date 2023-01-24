/* assignment -1
	program 2
*/



#include<stdio.h>
#include<conio.h>
#include<iostream.h>

class AREA
{
	public:
	void area(int side)
	{
		cout<<"area of square:"<<4*side;
	}
	void area(float pi,int radius)
	{
		cout<<"\n area of circle:"<<pi*radius*radius;
	}
	void area(int base,int height,int temp)
	{
		cout<<"\narea of triangle:"<<1.0/2.0*base*height;
	}
};
void main()
{
	clrscr();
	AREA A;
	A.area(5);
	A.area(3.14,5);
	A.area(5,5);
	getch();
}
