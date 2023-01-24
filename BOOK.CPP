/*		assignment-1
		set-1
		que-20*/
#include<iostream.h>
#include<stdio.h>
#include<iomanip.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

int n;
class book
{
	int book_code;
	char title[10],auther[10],edition[10],publisher[10];
	public:
		void get();
		void find(book *b);
		void display();
};
void book::get()
{
	cout<<"enter book code:\n";cin>>book_code;
	cout<<"enter title:\n";cin>>title;
	cout<<"enter auther:\n";cin>>auther;
	cout<<"enter edition:\n";cin>>edition;
	cout<<"enter publisher:\n";cin>>publisher;
}
void book::display()
{
      cout<<setw(10)<<book_code<<setw(10)<<title<<setw(10)<<auther<<setw(10)<<edition<<setw(10)<<publisher<<endl;
}
void book::find(book *b)
{
	int flag=0;
	char t[10];
	cout<<"enter the title to search the book";
	cin>>t;
	for(int i=0;i<n;i++)
	{
		if(strcmp(b[i].title,t)==0)
		{
			flag=1;
			break;

		}
		else
		{
			flag=0;
		}
	}
	if(flag==1)
		cout<<"found";
	else
		cout<<"not found";
}
void main()
{

	book b[10],temp;
	int i;
	clrscr();
	cout<<"how many element?";
	cin>>n;
	for(i=0;i<n;i++)
	{
		b[i].get();
	}
	cout<<"bookcode\ttitle\tauther\tedition\tpublisher\n";
	for(i=0;i<n;i++)
	{
		b[i].display();
	}
	temp.find(b);
	getch();

}
