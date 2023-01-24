#include<iostream.h>
#include<conio.h>
#include<string.h>

class unary
{
	char str[20];
	public:
	unary()
	{
		cout<<"enter first string:";cin>>str;

	}
	void put()
	{
		cout<<"first string="<<str<<endl;
	}
	friend void operator +(unary &str1);

	friend void operator >=(unary &str1);


};
	 void operator +(unary &str1)
	{
		strcat(str,str1.str);

	}
	void operator >=(unary &str1)
	{

		strcmp(str,str1.str);
	}

void main()
{
	unary u,u1;
	u+u1;
	u.put();

	if(str==0)
	{
		cout<<"both string are same";
	}
	else if(str>=1)
	{
		cout<<"first string are grater";
	}
	else
	{
		cout<<"second  string are greater";
	}
	u.put();
	getch();
}