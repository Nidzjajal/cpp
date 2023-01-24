#include<iostream.h>
#include<conio.h>

class product
{
	int p_id,p_qty;
	char p_name[10];
	public:
		void insert()
		{
			cout<<"p_id";
			cin>>p_id;
			cout<<"p_name";
			cin>>p_name;

			cout<<"p_qty";
			cin>>p_qty;
		}
		void display()
		{
			cout<<"p_id:"<<p_id<<endl;
			cout<<"p_name:"<<p_name<<endl;
			cout<<"p_qty:"<<p_qty<<endl;

		}
};
void main()
{
	product p;
	clrscr();
	p.insert();
	p.display();
	getch();
}