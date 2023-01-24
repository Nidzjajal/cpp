#include<iostream.h>
#include<conio.h>
class division
{
	public:
		float div(float p,float q)
		{
		       return(p/q);
		}
};
void main()
{
	clrscr();
	division d;
	float a,b,x;

	cout<<"enter a:";
	cin>>a;

	cout<<"enter b:";
	cin>>b;

	x=d.div(a,b);
	cout<<"division is :"<<x;
	getch();
}