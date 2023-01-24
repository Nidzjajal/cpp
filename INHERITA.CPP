//		hybrid inheritance

#include<iostream.h>
#include<conio.h>
class vehical             //class created
{
	public:
	int v_no;
	char color[10];
};
class scooter:virtual public vehical     //virtual inherited
{
	public:
	char type[10];
	int price;
};
class bill:virtual public vehical         //virtual inherited
{
	public:
	float dis,tax;
};
class payment:public scooter ,public bill
{
	public:
	int total;
	float add_dis;
	void get()                   //get function
	{
		cout<<"\nenter vehical no->";cin>>v_no;
		cout<<"\nenter color->";cin>>color;
		cout<<"\nenter type(moped & bike)->";cin>>type;
		cout<<"\nenter price->";cin>>price;
	}
	void process()                          //process function
	{
		dis=price*7.0/100.00;
		tax=price*4.0/100.00;
		if(type=="moped")
		{
			add_dis=price*2.00/100.00;

		}
		if(type=="bike")
		{
			add_dis=price*3.00/100.00;
		}
	}
	void put()                      //put function
	{
		cout<<"\nvehical no->"<<v_no;
		cout<<"\ncolor->"<<color;
		cout<<"\ntype(moped & bike)->"<<type;
		cout<<"\nprice->"<<price;
		cout<<"\ndiscount on price ->"<<dis;
		cout<<"\ntax on price ->"<<tax;
		cout<<"\nadditional discount ->"<<add_dis;
	}
};
void main()
{
	clrscr();
	payment p;
	p.get();
	p.process();
	p.put();
	getch();
}