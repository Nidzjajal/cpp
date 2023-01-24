#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class second;
class first           //create
{
	public:
	int x;
	void get()
	{
		cout<<"\nx->";cin>>x;
	}
	friend void sub(first f,second s);        //friend function

};
class second
{
	public:
	int y;
	void get()
	{
		cout<<"\ny->";cin>>y;
	}
	friend void sub(first f,second s);


};
void sub(first f,second s)                          //call
{
	cout<<"\nsubstraction is "<<f.x-s.y;
}
void main()
{
	clrscr();
	first f;
	f.get();
	second s;
	s.get();
	sub(f,s);
	getch();
}