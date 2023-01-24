#include<iostream.h>
#include<conio.h>
class matrix
{
	public:
	int a[3][3];
	friend operator>>(istream &in,matrix &m)
	{
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				in>>m.a[i][j];
			}
		}

	}
	friend operator<<(ostream &out,matrix &m)
	{
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				out<<m.a[i][j]<<"\t";
			}
			out<<"\n";
		}

	}
	matrix operator +(matrix b)
	{
		matrix c;
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				c.a[i][j]=a[i][j]+b.a[i][j];
			}

		}
		return c;

      }
};
void main()
{
clrscr();
	matrix A,B,c;
	cout<<"\n enter matrix a:\n";
	cin>>A;
	cout<<"\n enter matrix b:\n";
	cin>>B;
	c=A+B;
	cout<<"\naddition:\n";
	cout<<c;
	getch();
}