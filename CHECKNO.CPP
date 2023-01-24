#include<iostream.h>
#include<conio.h>
#include<process.h>
class number
{

	public:
		void palindrome();
		void armstrong();
		void magic();
};
void number::palindrome()
{
	int n,num,digit,rev=0;
	cout<<"enter a positive number:";
	cin>>num;
	n=num;
	do
	{
		digit=num%10;
		rev=(rev*10)+digit;
		num=num/10;
	}while(num!=0);
	cout<<"the reverse of the number is:"<<rev<<endl;
	if(n==rev)
	{
		cout<<"the number is a palindrome";
	}
	else
	{
		cout<<"the number is not a palindrome";
	}
}

void number::armstrong()
{
	int num,temp,r,sum=0;
	cout<<"enter number to be checked:";
	cin>>num;
	temp=num;
	while(temp!=0)
	{
		r=temp%10;
		sum=sum+r*r*r;
		temp=temp/10;
	}
	if(sum==num)
	{
		cout<<"\n"<<num<<" is an armstrong number";
	}
	else
	{
		cout<<"\n"<<num<<" is not an armstrong number";
	}
}

void number::magic()
{
	int num,i;
	cout<<"enter the number:";
	cin>>num;
	int num1=num;
	int sum=0,r;
	while(num1!=0)
	{
		r=num1%10;
		sum+=r;
		num1/=10;
	}
	int rev=0,num2=sum,r2;
	while(num2!=0)
	{
		r2=num2%10;
		rev=rev*10+r2;
		num2/=10;
	}
	if(sum*rev==num)
	{
		cout<<"it is a magic number";
	}
	else
	{
		cout<<"it is not a magic number";
	}
}
void main()
{
	int choice;
	clrscr();
	number n;
	do
	{
		cout<<"\npress:\n1->palindrome\n2->armstrong\n3->magic\n0->exit";
		cout<<"\nenter choice:";
		cin>>choice;
		switch(choice)
		{
			case 1: n.palindrome();
				getch();
				break;
			case 2: n.armstrong();
				getch();
				break;
			case 3: n.magic();
				getch();
				break;
			case 0: exit(0);
		}
	}while(1);
	getch();
}