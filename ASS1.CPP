#include<iostream.h>
#include<conio.h>

class Add
{
	public:
		add(int x,int y=7,int z=5)
		{
			cout<<"addition of 3 no:"<<x+y+z;

		}
};
void main()
{
	Add A;
	A.add(3);
	getch();
}