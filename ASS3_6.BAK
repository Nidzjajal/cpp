#include<iostream.h>
#include<process.h>
#include<conio.h>
int found,qty;
float total_stock;
class product
{
	public:
	int p_code;
	char p_name[10];
	void get_product()
	{
		cout<<"\nenter product code->";cin>>p_code;
		cout<<"\nenter product name->";cin>>p_name;
		cout<<"\nenter total stock ->";cin>>total_stock;
	}

};
class stock:public product
{
	public:
	void update()
	{
		if(found==1)
		{
			total_stock=total_stock-qty;

		}
		if(found==2)
		{
			total_stock=total_stock+qty;
		}
	   //	cout<<"\n total stock->"<<total_stock;
	}

	void display()
	{
		cout<<"\nproduct code->"<<p_code;
		cout<<"\nproduct name->"<<p_name;
		cout<<"\ntotal stock->"<<total_stock;

	}
};
class sales:public stock
{

	public:
	void sell_pro()
	{
	cout<<"how much quantity do you sales?";cin>>qty;
	found=1;
	update();
	}
};
class purchase:public  stock
{
	public:
	void purchase_pro()
	{
		cout<<"how much quantity do you purchase?";cin>>qty;
		found=2;
		update();
	}
};


void main()
{
	int ch;
	clrscr();
	stock s;
	s.get_product();

	do{
		cout<<"\npress 1->sales stock";
		cout<<"\npress 2->puchase stock";
		cout<<"\npress 0->exit";
		cout<<"\nenter choice:";cin>>ch;
		switch(ch)
		{
			case 1:sales a;a.sell_pro();getch();break;
			case 2:purchase p;p.purchase_pro();getch();break;
			case 0:exit(0);

		}
	s.display();
	getch();
	}while(ch!=0);

}