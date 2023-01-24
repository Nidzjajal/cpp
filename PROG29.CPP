/*
	prog-29
	ass=1
	overloaded constructor
*/
#include<stdio.h>
#include<conio.h>
#include<iostream.h>

class alphabet
{

	public:
		int x;
		alphabet()
		{

			cout<<"\n default constructor called";
			x=23;
		}
		alphabet(int p)
		{
		 cout<<"\n parmeterized constructor called";
		 x=p;

		}
		alphabet(alphabet & a)
		{
			cout<<"\n copy constructor called";
			x=a.x;
		}
};
void main()
{
	clrscr();

	alphabet alpha;
	alphabet beta(alpha.x);
	alphabet gamma=beta;//implicit
	alphabet theta=alphabet(gamma);//explicit


	cout<<"\n value of alpha:"<<alpha.x;
	cout<<"\n value of beta:"<<beta.x;
	cout<<"\n value of gamma"<<gamma.x;
	cout<<"\n value of theta:"<<theta.x;
	getch();
}