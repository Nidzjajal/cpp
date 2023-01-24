#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{
	int roll;
	char name[10],city[20];
	float per;
	public:
		student(student &s)
		{	s.roll=101;
			strcpy(name,"ram");
			strcpy(city,"mahuva");
			per=75.00;
		}
		void put()
		{
		     cout<<"roll:"<<roll;
		     cout<<"\nname:"<<name;
		     cout<<"\ncity:"<<city;
		     cout<<"\nper:"<<per;
		}
};
void main()
{
	student s;
	s.put;
	getch();
}