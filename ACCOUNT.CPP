#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
class account
{
	float bal;
	int acc_no;
	char name[20];
	public:
		void deposit();
		void withdraw();
		void display();
		account()
		{
			acc_no=101;
			strcpy(name,"nidhi\n");
			bal=1000;
		}
};
void account::deposit()
{
	float value;
	cout<<"enter deposit value:";
	cin>>value;
	bal=bal+value;
}
void account ::withdraw()
{
	float value;
	cout<<"enter withdraw value:";
	cin>>value;
	if(value>bal)
	{
		cout<<"insuuficent balance";
	}
	bal=bal-value;
}
void account ::display()
{
	cout<<"account no"<<acc_no<<endl;
	cout<<"name"<<name;
	cout<<"balance"<<bal<<endl;

}
void main()
{
	clrscr();
	account A;
	int choice;
	do
	{
		clrscr();
		cout<<"1->deposit\n2->withdraw\n3->display0->exit\n\n";
		cout<<"enter your choice:";
		cin>>choice;
		switch(choice)
		{
			case 1:
				A.deposit();
				getch();
				break;
			case 2:
				A.withdraw();
				getch();
				break;
			case 3:
				A.display();
				getch();
				break;
			case 0:
				exit(0);
				getch();
		}
	}while(1);
	A.deposit();
	A.withdraw();
	A.display();
	getch();
}