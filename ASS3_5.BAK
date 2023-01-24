#include<iostream.h>
#include<conio.h>
class game
{
	public:
	int bad,vol,cricket;
	virtual void getpoint()=0;

	virtual void displaypoint()=0;

};
class badmintan:public game
{
	public:
	virtual void getpoint()
	{

		cout<<"\n---enter score ---";
		cout<<"\nbadmintan->";cin>>bad;

	}
	virtual void displaypoint()
	{
		cout<<"---display--";
		cout<<"\nbadmintan->"<<bad;
	}

};
class volleyball:public game
{
	public:
	virtual void getpoint()
	{
		cout<<"\n\n---enter score ---";

		cout<<"\nvolley ball->";cin>>vol;


	}
	virtual void displaypoint()
	{
		cout<<"---display--";

		cout<<"\nvolley ball->"<<vol;

	}
};
class cricket:public game
{
	public:
       virtual	void getpoint()
	{
		cout<<"\n\n---enter score ---";
		cout<<"\ncricket->";cin>>cricket;

	}
	virtual void displaypoint()
	{
		cout<<"---display--";
		cout<<"\ncricket->"<<cricket;
	}
};
void main()
{
	clrscr();
	game *g;
	badmintan b;
	volleyball v;
	cricket c;
	g=&b;
	g->getpoint();
	g->displaypoint();
	g=&v;
	g->getpoint();
	g->displaypoint();
	g=&c;
	g->getpoint();
	g->displaypoint();
	getch();
}