#include<iostream.h>
#include<conio.h>
#include<string.h>

class student
{
	public:
	int roll;
	char *name;
	student()
	{
	}
	student(int r,char *n)
	{
		roll=r;
		strcpy(name,n);

	}
	virtual void display()=0;
};
class theory:virtual public student
{
	public:
	int m1,m2,m3;
	theory()
	{
	}
	theory(int a,int b,int c)
	{

		m1=a;
		m2=b;
		m3=c;
	}

};
class practical:virtual public student
{
	public:
	int pr;
	practical()
	{
	}
	practical(int p)
	{

		pr=p;
	}
};
class result:public theory,public practical
{
	public:
	int t;
	result()
	{
	}
	result(int x,char *y,int a,int b, int c,int p):theory(a,b,c),practical(p),student(x,y)
	{
		t=a+b+c+p;
	}
	virtual void display()
	{
		cout<<"\nroll->"<<roll;
		cout<<"\nname->"<<name;
		cout<<"\nm1->"<<m1;
		cout<<"\nm2->"<<m2;
		cout<<"\nm3->"<<m3;
		cout<<"\npractical->"<<pr;
		cout<<"\ntotal->"<<t;
	}
};
void main()
{
	clrscr();
	result r(1,"nidhi",45,56,78,90);
	r.display();
	getch();
}