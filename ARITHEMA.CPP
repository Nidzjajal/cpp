#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
class demo
{
	float a,b;
	public:
	       inline void get();
	       inline void add();
	       inline void sub();
	       inline void div();
	       inline void mul();
};
inline void demo::get()
{
	cout<<"enter a,b";cin>>a>>b;
}
inline void demo::add()
{
	cout<<"Addition:"<<a+b;


}
inline void demo::sub()
{
	cout<<"substraction:"<<a-b;

}
inline void demo::div()
{
	cout<<"division:"<<a/b;

}
inline void demo::mul()
{
	cout<<"multiplication:"<<a*b;

}

void main()
{
	int choice;
	clrscr();
	demo d;
	do
	{
		clrscr();
		cout<<"\n press\n1->get\n2->add\n3->sub\n4->mul\n5->div\n0->exit\n";
		cout<<"enter choice";cin>>choice;
	switch(choice)
	{
		case 1:
			d.get();
			getch();
			break;

		case 2:
			d.add();
			getch();
			break;
		case 3:
			d.sub();
			getch();
			break;
		case 4:
			d.mul();
			getch();
			break;
		case 5:
			d.div();
			getch();
			break;
		case 0:
			getch();
			exit(0);
	}
	}while(1);

}
