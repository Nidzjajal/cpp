/*	program 8
	assignment-1
*/
#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class student
{
	int st_no;
	char name[20],address[20],course[3];
	long int phone;

	public:
		student()
		{

		}
		student(int no)
		{
		     st_no=no;
		     cout<<"\n enter student name:";
		     cin>>name;

		     cout<<"\n enter address:";
		     cin>>address;

		     cout<<"\n enter phone:";
		     cin>>phone;

		     cout<<"\n enter course:";
		     cin>>course;
		}


		void display()
		{
			cout<<"\nst_no"<<st_no;
			cout<<"\nname:"<<name;
			cout<<"\naddress:"<<address;
			cout<<"\nphone"<<phone;
			cout<<"\n course"<< course;

		}
};
void main()
{
	clrscr;
	//student s;
	student s1(1);
	s1.display();

	getch();
}

