#include<iostream.h>
#include<conio.h>

class Mid
{

	public:
		void calc(int x,int y=5 ,int z=3)
		{
			if(x<y&&x>z||x>y&&x<z)
			{
			cout<<"\nMiddle value x "<<x;
			}
			else if (y<x&&y>z||y>x&&y<z)
			{
				cout<<"\nMiddle value y "<<y;
			}
			else
			{
				cout<<"Middle value z "<<z;
			}

		}
};
void main()
{
	clrscr();
	Mid m;
	m.calc(12);
	m.calc(4,7,9);
	getch();
}