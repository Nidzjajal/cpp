#include<iostream.h>
#include<conio.h>

class distance
{
	public:
	int km,m;
	void get()
	{
		cout<<"\n km:";
		cin>>km;
		cout<<"\n m:";
		cin>>m;
	}
	void put()
	{
		cout<<"\n kilometer:"<<km;
		cout<<"\n meter:"<<m;
	}
	distance operator + (distance d,distance d1)
	{
		distance temp;
		temp.km=d.km+d1.km;
		temp.m=d.m+d1.m;
		return temp;
	}
};
void main()
{
	demo d,d1;
	d.get();
	d1.get();
	t=d+d1;
	t.put();
	getch();
}
