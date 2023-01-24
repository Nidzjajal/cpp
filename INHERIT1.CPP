#include<iostream.h>
#include<conio.h>

class salary;
class employe;

class company
{
	public:
	int  emp_no;
	long int  b_salary;
	float ta,da,hra,pf,gf,n_salary;

};
class employe
{
	public:
	int age;
	char name[10],address[10],department[10],city[10],post[10];

};
class salary:public company,public employe
{
	public:

	void get_data()
	{
		cout<<"\nenter employe  no->";
		cin>>emp_no;
		cout<<"\nenter basic salary->";
		cin>>b_salary;
		cout<<"\nenter employe name->";
		cin>>name;
		cout<<"\nenter address->";
		cin>>address;
		cout<<"\nenter age->";
		cin>>age;
		cout<<"\nenter department->";
		cin>>department;
		cout<<"\nenter city->";
		cin>>city;
		cout<<"\n enter post->";
		cin>>post;
	}
	void process()
	{
		ta=b_salary*10/100;
		da=b_salary*12/100;
		hra=b_salary*15/100;

		gf=b_salary+ta+da+hra;
		pf=b_salary*12.5/100;
		n_salary=gf-pf;
	}
	void display()
	{
		cout<<"\nenter employe no->"<<emp_no;
		cout<<"\nenterbasic salary->"<<b_salary;
		cout<<"\nenter  ta->"<<ta;
		cout<<"\nenter da ->"<<da;
		cout<<"\nenter hra->"<<hra;
		cout<<"\nenter pf->"<<pf;
		cout<<"\nenter gross salary->"<<gf;
		cout<<"\nenter net salary->"<<n_salary;
		cout<<"\nenter employe name->"<<name;
		cout<<"\nenter employe address->"<<address;
		cout<<"\nenter employe age->"<<age;
		cout<<"\nenter employe department->"<<department;
		cout<<"\nenter employe city->"<<city;
		cout<<"\nenter employe post->"<<post;
	}

};
void main()
{
	clrscr();
	salary s;
	s.get_data();
	s.process();
	s.display();
	getch();
}





