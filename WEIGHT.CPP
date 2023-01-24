#include<iostream.h>
#include<conio.h>

class weight               //class is create
{
	long int g,kg;
	public:
	weight()                            //default constructor
	{
	}
	weight(long int gram)
	{
		int diff;
		kg=gram/1000;
		diff=gram%1000;
		g=diff;
	}
  /*	void get()
	{
		cout<<"\nenter value of hour:";
		cin>>kg;
		cout<<"\nenter value of minute:";
		cin>>g;
		cout<<"\nenter value of second:";
		cin>>s;
	}     */
	void put()
	{
		cout<<"\nkilogram:"<<kg;
		cout<<"\ngram:"<<g;
	}

};
void main()
{
	clrscr();
	long int gram;
	cout<<"enter gram:";
	cin>>gram;
	weight w;
	w=gram;
	w.put();
	getch();

}