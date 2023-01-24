#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{
	int st_no;
	long int phone;
	char course[10],name[10],address[20];
    public:
	student()
	{

	}
	student(char *n, char *a,long int p,char *c)
	{
	    st_no=1;
	    strcpy(name,n);
	    strcpy(address,a);
	    phone=p;
	    strcpy(course,c);
	}

	void display()
	{
		cout<<"\nstudent no->"<<st_no;
		cout<<"\nstudent name->"<<name;
		cout<<"\nstudent address->"<<address;
		cout<<"\nstudent phone->"<<phone;
		cout<<"\nstudent course->"<<course;
	}

};
void main()
{

	clrscr();
	student s;
	student s1("ram","ayodhya",223435,"bca");
	s1.display();
	getch();
}
