#include<iostream.h>
#include<conio.h>
#include<string.h>
class media
{
	public:
	int price;
	char *title;
	media(int p,char* t)
	{
		price=p;
		strcpy(title,t);
	}

};
class harddisk:public media
{
	public:
	int qty;
	char *hdd_type;

	harddisk(int a,char *b,int x,char* y):media(a,b)
	{
		qty=x;
		strcpy(hdd_type,y);

	}


	void display()
	{
		cout<<"\nenter title->"<<title;
		cout<<"\nenter price->"<<price;
		cout<<"\nenter harddisk type->"<<hdd_type;
		cout<<"\nenter quantity ->"<<qty;
	}
};
class pendrive:public media
{
	public:
	int qty;
	char*pendrive_type;

	pendrive(int a,char *b,int x,char* y):media(a,b)
	{
		qty=x;
		strcpy(pendrive_type,y);
	}

	void display()
	{
		cout<<"\nenter title->"<<title;
		cout<<"\nenter price->"<<price;
		cout<<"\nenter pendrive type->"<<pendrive_type;
		cout<<"\nenter quantity ->"<<qty;
	}
};
void main()
{
	int price,qty;
	char *hdd_type,*title,*pendrive_type;
	clrscr();
	cout<<"\nenter title->";cin>>title;
	cout<<"\nenter price->";cin>>price;
	cout<<"\nenter harddisk type->";cin>>hdd_type;
	cout<<"\nenter quantity ->";cin>>qty;
	harddisk h(price,title,qty,hdd_type);
	h.display();
	cout<<"\nenter title->";cin>>title;
	cout<<"\nenter price->";cin>>price;
	cout<<"\nenter pendrive type->";cin>>pendrive_type;
	cout<<"\nenter quantity ->";cin>>qty;
	pendrive p(price,title,qty,pendrive_type);
	p.display();
	getch();
}