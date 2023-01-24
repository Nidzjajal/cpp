#include<iostream.h>
#include<conio.h>

class collage
{
	public:
	char c_name[10],address[10],city[10];


};
class student:public collage
{
	public:
	int roll,s1,s2,s3,s4,total;
	char name[10];
	void get()
	{
		cout<<"\n enter collage name->";cin>>c_name;
		cout<<"\n enter address->";cin>>address;
		cout<<"\n enter city->";cin>>city;
		cout<<"\n enter student roll->";cin>>roll;
		cout<<"\n enter mark of s1->";cin>>s1;
		cout<<"\n enter mark of s2->";cin>>s2;
		cout<<"\n enter mark of s3->";cin>>s3;
		cout<<"\n enter mark of s4->";cin>>s4;
		total=s1+s2+s3+s4;
	}
	void put()
	{
		cout<<roll<<"\t"<<s1<<"\t"<<s2<<"\t"<<s3<<"\t"<<s4<<"\t"<<total<<"\t"<<c_name<<"\t"<<address<<"\t"<<city<<endl;

	}
};
void main()
{
	clrscr();
	int n,i;
	student c[10];
	cout<<"\n how many record do you want?";
	cin>>n;
	for(i=0;i<n;i++)
	{
		c[i].get();
	}
	cout<<"roll\ts1\ts2\ts3\ts4\ttotal\tc_name\taddress\tcity\n";
	for(i=0;i<n;i++)
	{
		c[i].put();
	}
	getch();

}