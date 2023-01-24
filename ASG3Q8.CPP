#include<iostream.h>
#include<conio.h>
class vehicle
{
	public:
		char color[10];
		int vehicle_no;

};
class scooter:virtual public vehicle
{
	public:
		char type[10];
		long int price;
};
class bill:virtual public vehicle
{       public:
		float discount,tax;
};
class payment:public scooter,public bill
{
	public:

		float add_dis;
		int total;
		/*if(type==moped)
		{
			discount=2%;
		}
		else if(type==bike)
		{
			discount=3%;
		}*/
		void input()
		{
			cout<<"\n enter the color of vehicle:";
			cin>>color;
			cout<<"\n enter the vehicle no:";
			cin>>vehicle_no;
			cout<<"\n enter the price of scooter";
			cin>>price;

		}
		void process()
		{
			discount=price*7/100;
			tax=price*4/100;
		}
		void display()
		{
		    cout<<"\ntotal amount of the vehicle";
		    cout<<"\n price of scooter="<<price;
		    cout<<"\ndiscount is of 7% on price:"<<discount;
		    cout<<"\ntax is of 4% on price:"<<tax;
		    cout<<"\nadditional discount is of 2% on moped:"<<add_dis;
		    cout<<"\nadditional discount is of 3% on bike:"<<add_dis;
		    cout<<"\n\n\t\t total bill====total"<<total;
		}
		void bike()
		{
		    add_dis=2*100/price;
		}
		void moped()
		{
			add_dis=3*100/price;
		}
		void tot()
		{       int a,b,c,d;
			/*a=price-discount;
			b=price+tax;
			c=price-add_dis;
			d=b-(a+c);
			total= price+d;*/
			a=discount+add_dis;
			total=price+tax-a;

		}
};
void main()
{
     int ch;
     clrscr();
     payment p;
     p.input();
     cout<<"\n a->bike";
     cout<<"\n b->moped";
     cout<<"\n enter the choice:";
     cin>>ch;
     switch(ch)
     {
	case 'a':p.bike();
		break;
	case 'b':p.moped();
		break;
	default:
		cout<<"\n enter proper choice:";

     }
     p.process();
     p.tot();
     p.display();
     getch();
}