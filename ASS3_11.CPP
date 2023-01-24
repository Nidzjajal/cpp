#include<iostream.h>
#include<conio.h>
#include<string.h>

class media
{
	public:
	float price;
	char title[50];
	media()
	{
		strcpy(title,"media");
		price=100;
	}
	virtual void display()
	{
		cout<<"\ncall from media";
	}

};
class book:public media
{
	public:
	int page;
	book()

	{
	page=20;
	}
	void display()
	{
		cout<<"---------book----------";
		cout<<"\ntitle="<<title;
		cout<<"\nprice="<<price;
		cout<<"\npages="<<page;
	}

};
class tape:public media
{
	public:
	float time;
	tape()
	{
		time=2.50;
	}
	void display()
	{
		cout<<"\n---------tape----------";
		cout<<"\ntitle="<<title;
		cout<<"\nprice="<<price;
		cout<<"\ntime="<<time;

	}
};
void main()
{
	clrscr();
	media *m;
	book b;
	m=&b;
	m->display();
	tape t;
	m=&t;
	m->display();
	getch();
}