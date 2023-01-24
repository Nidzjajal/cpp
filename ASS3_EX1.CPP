#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{
	public:
	int roll;
	char *name;
	student(int r,char* n)
	{
		roll=r;
		strcpy(name,n);
	}
};
class theory
{
	public:
	int m1,m2;
	theory(int x,int y)
	{
		m1=x;
		m2=y;
	}
};
class result:public student,public theory
{
	public:
	int t;
	result(int a,char *b,int x,int y):student(a,b),theory(x,y)
	{
		t=x+y;
		cout<<"\ntotal="<<t;
	}
};
void main()
{
	clrscr();
	result r(1,"nidhi",56,67);
	getch();
}