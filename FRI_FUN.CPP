#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class two;
class one
{
	int a;
	public:
	      friend void max(one,two);
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
	      friend void max(one,two);
	      void get()
	      {
		cout<<"b=";
		cin>>b;
	      }

};
void max(one x,two y)
{
	if(x.a>y.b)
	{
		cout<<"a is max"<<x.a;

	}
	else
	{
		cout<<"b is max"<<y.b;
	}
}

void main()
{
	clrscr();
	one A;
	A.get();
	two B;
	B.get();
	max(A,B);
	getch();


}