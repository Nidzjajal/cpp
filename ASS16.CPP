#include<iostream.h>
#include<conio.h>

class interest
{
	int p,r,n;
	public:
		void calc(int r,int  p=100,int n=15)
		{
			cout<<"interset of prn:"<<(p*r*n)/100;

		}
};
void main()
{
	interest i;
	i.calc(12);
	getch();
}