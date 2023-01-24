
#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

class employee
{
	int emp_no;
	float bsalary,gsalary,ta,da,hra,pf,net_salary;
	char name[10];
	public:
		void getdata();
		void calculate();
		void putdata();
};
void employee::getdata()
{
	cout<<"enter employee no:";cin>>emp_no;
	cout<<"enter employee name:";cin>>name;
	cout<<"enter basic salary:";cin>>bsalary;
}
void employee::calculate()
{
	ta=bsalary*10/100;
	da=bsalary*40/100;
	hra=bsalary*25/100;
	gsalary=bsalary+ta+da+hra;
	pf=bsalary*15/100;
	net_salary=gsalary-pf;
}
void employee::putdata()
{
	cout<<"emp_no\tname\tbsalary\t\tta\tda\thra\tpf\tnet salary\n";
	cout<<emp_no<<"\t"<<name<<"\t"<<bsalary<<"\t\t"<<ta<<"\t"<<da<<"\t"<<hra<<"\t"<<pf<<"\t"<<net_salary<<endl;
}
void main()
{
	clrscr();
	employee e;
	cout<<endl;
	e.getdata();
	e.calculate();
	e.putdata();
	getch();

}
