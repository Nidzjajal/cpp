#include<iostream.h>
#include<conio.h>

class matrix
{
	public:
	int  a[10][10],i,j;
	void get();
	void put();
	matrix friend  operator+(matrix m1,matrix m2);
	matrix friend  operator-(matrix m1,matrix m2);
	matrix friend  operator*(matrix m1,matrix m2);

};
	matrix operator+(matrix m1,matrix m2)
	{
	      matrix diff;
	      for(int i=0;i<3;i++)
	      {
		for(int j=0;j<3;j++)
		{
			diff.a[i][j]=m1.a[i][j]+m2.a[i][j];
		}
	      }
	      return diff;

	}
	matrix operator-(matrix m1,matrix m2)
	{
	      matrix diff;
	      for(int i=0;i<3;i++)
	      {
		for(int j=0;j<3;j++)
		{
			diff.a[i][j]=m1.a[i][j]-m2.a[i][j];
		}
	      }
	      return diff;

	}
	matrix operator*(matrix m1,matrix m2)
	{
	      matrix diff;
	      for(int i=0;i<3;i++)
	      {
		for(int j=0;j<3;j++)
		{
			diff.a[i][j]=0;
			for(int k=0;k<3;k++)
			{
				diff.a[i][j]+=m1.a[i][k]*m2.a[k][j];
			}
		}
	      }
	      return diff;

	}

void matrix::get()
{

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
}
void matrix ::put()
{

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<" "<<a[i][j];
		}
		cout<<"\n";
	}
}
void main()
{
	clrscr();
	matrix m1,m2,m3;
	cout<<"enter matrix 1:"<<endl;
	m1.get();
	cout<<"enter matrix 2:"<<endl;
	m2.get();
	cout<<"\naddition of matrix"<<endl;
	m3=m1+m2;
	m3.put();
	cout<<"\nsubstraction of matrix"<<endl;
	m3=m1-m2;
	m3.put();
	cout<<"\nmultiplication of matrix"<<endl;
	m3=m1*m2;
	m3.put();

	getch();
}