#include<iostream.h>
#include<conio.h>
#include<string.h>
class string   //create class
{
	public:
	char str[10];
	friend int operator==(string s1,string s2)   //binary operator overloading
	{
	       return(strcmp(s1.str,s2.str));
	}
	void get()        //get function
	{
		cin>>str;
	}
};
void main()
{
	clrscr();
	string s1,s2;
	cout<<"\nenter first string->";
	s1.get();
	cout<<"\nenter second string->";
	s2.get();

	int x;
	x=s1==s2;         //== operator overloading call
	if(x==1)
	{
		cout<<"\n first string is bigger";
	}
	 else
	{
		cout<<"\n second string is bigger";
	}
	getch();

}