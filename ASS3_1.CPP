#include<iostream.h>
#include<conio.h>
#include<string.h>

class matches
{
	public:
	char p_name[10];
	int no_matches;
    /*	matches()
	{
		strcpy(p_name,"nidhi");
	} */
};
class test:public matches
{
	public:
	float avg;
	int run;

	void average()
	{
		avg=run/no_matches;
	}
	void get()
	{
		cout<<"\nenter no of matches:";
		cin>>no_matches;
		cout<<"\nenter total runs they played:";
		cin>>run;
	}
	void display()
	{
//		cout<<"\nenter player name:"<<p_name;
		cout<<"\nenter no of matches:"<<no_matches;
		cout<<"\nenter total runs they played:"<<run;
		cout<<"\naverage->"<<avg;
	}
};
class oneday:public matches
{
	public:
	float avg;
	int run;
	void average()
	{
		avg=run/no_matches;
	}
	void get()
	{
		cout<<"\nenter no of matches:";
		cin>>no_matches;
		cout<<"\nenter total runs they played:";
		cin>>run;
	}
	void display()
	{
//		cout<<"\nenter player name:"<<p_name;
		cout<<"\nenter no of matches:"<<no_matches;
		cout<<"\nenter total runs they played:"<<run;
		cout<<"\naverage->"<<avg;
	}
};
class t20:public matches
{
	public:
	float avg;
	int run;
	void average()
	{
		avg=run/no_matches;
	}
	void get()
	{
		cout<<"\nenter no of matches:";
		cin>>no_matches;
		cout<<"\nenter total runs they played:";
		cin>>run;
	}
	void display()
	{
//		cout<<"\nenter player name:"<<p_name;
		cout<<"\nenter no of matches:"<<no_matches;
		cout<<"\nenter total runs they played:"<<run;
		cout<<"\naverage->"<<avg;
	}
};
void main()
{
	clrscr();
	char name[10];
	cout<<"\nenter player name->";
	cin>>name;
	test t;
	cout<<"\n-----test------";
	t.get();t.average();t.display();
	oneday o;
	cout<<"\n-----oneday------";
	o.get();o.average();o.display();
	t20 a;
	cout<<"\n-----t20------";
	a.get();a.average();a.display();
	getch();

}