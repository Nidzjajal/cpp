#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<iomanip.h>
int n;
class employee
{
	int e_id;
       //	long int b_salary;
	char e_name[10];
	float pf;
	long int ta,da,hra,b_salary,g_salary,net_salary;
	public:
		void get();
		void calculate();
		void sort(employee*e);
		void put();
};
void  employee::get()
{
	cout<<"\nenter employee id:";cin>>e_id;
	cout<<"\nenter employee name:";cin>>e_name;
	cout<<"\nenter basic salary:";cin>>b_salary;
}
void employee::calculate()
{
	ta=b_salary*10/100;
	da=b_salary*12/100;
	hra=b_salary*15/100;
	g_salary=b_salary+ta+da+hra;
	pf=b_salary*12.5/100;
	net_salary=g_salary-pf;
}
void employee::sort(employee*e)
{
	employee t;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(e[i].net_salary<e[j].net_salary)
			{
				t=e[i];
				e[i]=e[j];
				e[j]=t;
			}
		}
	}
}
void employee::put()
{
	cout<<e_id<<setw(10)<<e_name<<setw(10)<<b_salary<<setw(10)<<ta<<setw(10)<<da<<setw(10)<<hra<<setw(10)<<g_salary<<setw(10)<<net_salary<<endl;
}
void main()
{
	clrscr();
	employee e[10],temp;
	//int n;
	cout<<"\n how many element do you want to insert?:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		e[i].get();

	}
//	cout<<"\nid\tname\tsalary\tta\tda\thra\tg_salary\tnet_salary\n";
	for(i=0;i<n;i++)
	{
		e[i].calculate();
	       //	e[i].put();

	}
	temp.sort(e);
	cout<<"\n\nid\tname\tsalary\tta\tda\thra\tg_salary\tnet_salary\n";
	for(i=0;i<n;i++)
	{

		e[i].put();

	}
	getch();

}