#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class two;
class three;
class one
{
	int a;
	public:
	      friend void min(one,two,three);
	      void get()
	      {
		cout<<"a=";
		cin>>a;
	      }

};
class two
{
	int b;
	public:
	      friend void min(one,two,three);
	      void get()
	      {
		cout<<"b=";
		cin>>b;
	      }

};
class three
{
	int c;
	public:
	      friend void min(one,two,three);
	      void get()
	      {
		cout<<"c=";
		cin>>c;
	      }

};
void min(one x,two y,three z)
{
	if(x.a<y.b&&x.a<z.c)
	{
		cout<<"a is min"<<x.a;

	}
	else if(y.b<x.a&&y.b<z.c)
	{
		cout<<"b is min"<<y.b;
	}
	else
	{
		cout<<"c is min"<<z.c;
	}
}

void main()
{
	clrscr();
	one A;
	A.get();
	two B;
	B.get();
	three C;
	C.get();
	min(A,B,C);
	getch();


}