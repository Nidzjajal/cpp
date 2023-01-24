#include<iostream.h>
#include<conio.h>

class shape
{
	public:
	virtual void area()
	{
	}

};
class circle:public  shape
{
	public:
	float pi;int radious;
	circle(float p,int r)
	{
		pi=p;
		radious=r;
	}
	void area()
	{
		cout<<"\narea of circle:"<<pi*radious*radious;
	}
};
class square:public shape
{
	public:
	int size;
	square(int s)
	{
		size=s;
	}
	void area()
	{
		cout<<"\narea of square:"<<4*size;

	}
};
class rectangle:public shape
{
	public:
	int height,breath,length;
	rectangle(int l,int b, int h)
	{
		height=h;
		length=l;
		breath=b;
	}
	void area()
	{
		cout<<"\narea of rectangle"<<length*height*breath;
	}
};
void main()
{
	clrscr();
	circle C(3.14,6);
	C.area();
	square s(5);
	s.area();
	rectangle r(12,4,6);
	r.area();
	getch();
}