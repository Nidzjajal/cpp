#include<iostream.h>
#include<conio.h>

class employee
{
	public:
	int e_id;
	char *name;
	virtual void get()=0;
	virtual void put()=0;
};
class internal:public virtual employee
{
	public:
	int in_perf;

};
class external:public virtual employee
{
	public:
	int ext_perf;
};
class result:public internal,public external
{
	public:
	int total;
	 void get()
	{
		cout<<"\nenter employee id->";cin>>e_id;
		cout<<"\nenter employee name->";cin>>name;
		cout<<"\nenter internal performance->";cin>>in_perf;
		cout<<"\nenter external performance->";cin>>ext_perf;
		total=in_perf+ext_perf;
	}
	 void put()
	{
		cout<<"\nenter employee id->"<<e_id;
		cout<<"\nenter employee name->"<<name;
		cout<<"\nenter internal performance->"<<in_perf;
		cout<<"\nenter external performance->"<<ext_perf;
		cout<<"\ntotal->"<<total;

	}
};
void main()
{
	clrscr();
	employee*e;
	result r;
	e=&r;
	e->get();
	e->put();
	getch();

}