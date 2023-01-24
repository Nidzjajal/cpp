#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
class item
{
	int i_id,i_stock;
	char i_name[10];
	public:
		void purchase();
		void sales();
		void stock();
		item ()
		{
			i_id=101;
			strcpy(i_name,"nidhi");
			i_stock=1000;
		}
};
void item::purchase()
{
	float value;
	cout<<"purchase:";
	cin>>value;
	i_stock=i_stock+value;
}
void item::sales()
{
	float value;
	cout<<"sales:";
	cin>>value;
	if(value>i_stock)
	{
		cout<<"enough stock";
	}
	else
	{
		i_stock=i_stock-value;
	}
}
void item::stock()
{
	cout<<"item id:"<<i_id<<endl;
	cout<<"name"<<i_name;
	cout<<"item stock"<<i_stock<<endl;

}
void main()
{
	int choice;
	clrscr();
	item e;
	e.stock();
	do{

		cout<<"\npress\n1->purchase\n2->sales\n3->stock\n0->exit\n";
		cout<<"enter choice:";
		cin>>choice;
		switch(choice)
		{
			case 1:
				e.purchase();
				getch();
				break;
			case 2:
				e.sales();
				getch();
				break;
			case 3:
				e.stock();
				getch();
				break;
			case 0:
				exit(0);
		}
	}while(1);

}