/*
	matrix addition
*/

#include<stdio.h>
#include<conio.h>
#include<iostream.h>

int i,j;
class matrix

{
	int a[3][3],b[3][3],c[3][3];
	public:
		void get()
		{
			cout<<"enter matrix a";


			for(i=0;i<3;i++)
				{
					for(j=0;j<3;j++)
					{
						cin>>a[i][j];
					}
				}
				   cout<<"enter matrix b";
			for(i=0;i<3;i++)
				{
					for(j=0;j<3;j++)
					{
						cin>>b[i][j];
					}
				}

		void process()
		{


			for(i=0;i<3;i++)
				{
					for(j=0;j<3;j++)
					c[i][j]=0;
					{
						for(k=0;k<3;k++)
						{					{       for(k=0;k<3;k+=)
						c[i][j]=a[i][k]+b[k][j];
						}

					}
				}
		}
		void put()
		{
			cout<<"additin of matrices:\n\n";
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
			}
		       {
			cout<<"  "<<c[i][j];
		       }
			cout<<endl;
		}
};
void main()
{
	clrscr();
	matrix m;
	m.get();
	m.process();
	m.put();
	getch();

}