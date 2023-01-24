//program to searching the aadhar ->name && aadhar number


#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<iomanip.h>
#include<string.h>
int  n;
int flag=0;
class aadhar      //class name
{
	int  aadhar_no;
	char name[10],city[10],mobile[10];

	public:
		void get();
		void nam(aadhar*a);
		void aadharno(aadhar*a);
		void put();
};
void aadhar ::get()           //get function outside the class
{
	cout<<"\n enter aadhar number:";cin>>aadhar_no;
	cout<<"\n enter name:";cin>>name;
	cout<<"\n enter city:";cin>>city;
	cout<<"\n enter mobile:";cin>>mobile;
}
void aadhar::nam(aadhar*a)     //search for name
{
	 char s[10];
	cout<<"\n enter name to search:";
	cin>>s;

	for(int i=0;i<n;i++)
	{


				if(strcmp(a[i].name,s)==0)
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
	{
		cout<<"name is found";
	}
	else
	{
		cout<<"name not is found";
	}
}
void aadhar::aadharno(aadhar*a)                 //search for aadhar number
{
	int  s;
	cout<<"\n enter aadhar number to search:";
	cin>>s;

	for(int i=0;i<n;i++)
	{
			if(a[i].aadhar_no==s)
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
	{
		cout<<"\naadhar number is found";
	}
	else
	{
		cout<<"\naadhar number not found";
	}

}
void aadhar::put()    //put function outside the class
{

	cout<<aadhar_no<<setw(15)<<name<<setw(12)<<city<<setw(12)<<mobile<<endl;
}
void main()    //main function
{
	clrscr();
	aadhar a[10],temp;
	int choice;
	cout<<"\n how many element do you want to insert?";
	cin>>n;

	do
	{
	cout<<"\npress 1->get data";
	cout<<"\npress 2->put data";
	cout<<"\npress 3->name to search";
	cout<<"\npress 4->aadhar number to search";
	cout<<"\npress 0->exit";
	cout<<"\n PRESS KEY";
	cin>>choice;
	clrscr();
	switch(choice)
	{
		case 1:                            //call get function
			for(int i=0;i<n;i++)
			{
			a[i].get();
			}
			;getch();break;
		case 2: cout<<"aadhar_no\tname\tcity\tmobile\n";//call put function
			for(i=0;i<n;i++)
			{
				a[i].put();
			};getch();break;
		case 3:temp.nam(a);getch();break;    //call search name
		case 4:temp.aadharno(a);getch();break;  //call search aadhar number
		case 0:exit(0);getch();
	}
	}while(1);

	getch();
}