#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
class arithmetic          //class create
{
	float x,y;
	public:
	       void get()
	       {
			cout<<"enter x,y:\n";cin>>x>>y;
	       }
	       inline void add();
	       inline void sub();
	       inline void div();
	       inline void mul();
};
inline void arithmetic::add()    // to add
{
	cout<<"Addition:"<<x+y;


}
inline void arithmetic::sub()    // to subtract
{
	cout<<"substraction:"<<x-y;

}
inline void arithmetic::div()    //  division
{
	cout<<"division:"<<x/y;

}
inline void arithmetic::mul()   //  multiply
{
	cout<<"multiplication:"<<x*y;

}

void main()          // main function
{
	int choice;
	clrscr();
	arithmetic a;
	do   	{
		cout<<"\npress 1->get\npress 2->add\npress 3->sub\npress 4->mul\npress 5->div\npress 0->exit\n";
		cout<<"enter choice:";cin>>choice;
	switch(choice) // function for switch choice
	{
		case 1:
			a.get();
			getch();
			break;
		case 2:

			a.add();
			getch();
			break;
		case 3:
			a.sub();
			getch();
			break;
		case 4:
			a.mul();
			getch();
			break;
		case 5:
			a.div();
			getch();
			break;
		case 0:
			getch();
			exit(0);
	}
	}while(1);

}










