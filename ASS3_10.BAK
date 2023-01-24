#include<iostream.h>
#include<conio.h>

class first
{
	public:
	char car_name[10];
	char model[10];
};
class second:public first
{
	public:
	int car_no;
	int year;
};
class third:public second
{
	public:
	void getdata()
	{
		cout<<"\nenter car name:";cin>>car_name;
		cout<<"\nenter model :";cin>>model;
		cout<<"\nenter car no:";cin>>car_no;
		cout<<"\nenter year:";cin>>year;
	}
	void putdata()
	{
		cout<<car_name<<"\t"<<model<<"\t"<<car_no<<"\t"<<year<<endl;
	}
};
void main()
{
	clrscr();
	int n;
	third d[10];
	cout<<"\n how many element do you enter?";cin>>n;
	for(int i=0;i<n;i++)
	{
		d[i].getdata();
	}
	cout<<"carname\tmodel\tcarno\tyear\n";
	for(i=0;i<n;i++)
	{
		d[i].putdata();
	}
	getch();


}