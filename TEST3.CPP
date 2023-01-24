#include<iostream.h>
#include<conio.h>

class Area  //to create class
{
	public:
		void area(int s)// find area of circle
		{

			cout<<"\n area of circle"<<":"<<4*s;
		}
		void area(int l,int b) //find area of rectangle
		{

			cout<<"\narea of rectangle"<<":"<<2*(l+b);
		}

};
void main()
{
	Area A;
	clrscr();
	cout<<"\n\n\tTO FIND AREA";
	A.area(4);//invoke function    for   circle
	A.area(3,5); //invoke function    for   rectengle
	getch();
}