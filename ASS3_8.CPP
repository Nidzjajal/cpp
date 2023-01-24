#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<string.h>

int found;
class vehical
{
	public:
	int v_no;
	char *color;
};
class scooter:virtual public vehical
{
	public:
	char*type;
	int price;

};
class bill:virtual public vehical
{
	public:
	float dis,tax;

};
class payment:public scooter,public bill
{
	public:
	float add_dis,total;
	void get()
	{
		cout<<"\nenter vehical color->";cin>>color;
		cout<<"\nenter vehical number->";cin>>v_no;
		cout<<"\nenter price->";cin>>price;
		cout<<"\nenter type(bike or moped)->";cin>>type;
	}
	void process()
	{
		dis=price*7.0/100.00;
		tax=price*4.0/100.00;
		if(strcmp(type,"bike")==0)
		{
		      add_dis=price*3.0/100.00;
		      found=1;
		}
		if(strcmp(type,"moped")==0)
		{
		      add_dis=price*2.0/100.00;
		      found=2;
		}
		total=tax+price-add_dis-dis;
	}
	void display()
	{
		cout<<"\n vehical color->"<<color;
		cout<<"\n vehical number->"<<v_no;
		cout<<"\n type->"<<type;
		cout<<"\n price->"<<price;
		cout<<"\n discount->"<<dis;
		cout<<"\n tax->"<<tax;
		if(found==1)
		{
			cout<<"\n3% on bike->"<<add_dis;
		}
		if(found==2)
		{
			cout<<"\n2% on moped->"<<add_dis;
		}
		cout<<"\ntotal->"<<total;

	}
};
void main()
{
	clrscr();
	int ch;
	payment p;
	p.get();
      /*	do
	{
		cout<<"\npress1->bike";
		cout<<"\npress2->moped";
		cout<<"\npress0->exit";
		cout<<"\nenter choice->";
		cin>>ch;
		switch(ch)
		{
			case 1:scooter r;r.t();found=1;break;
			case 2:scooter s;s.t();found=2;break;
			case 0:exit(0);break;
		}   */
	      p.process();
	p.display();
	getch();
       //	}while(1);

}