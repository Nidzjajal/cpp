#include<iostream.h>
#include<conio.h>

class matrix
{
	int  a[3][3],b[3][3],c[3][3];
	int i,j;
	public:
		void get();
		void process();
		void put();
};
void matrix ::get()
{
	cout<<"matrix a:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{

			cin>>a[i][j];
		}
	}
	cout<<"matrix b:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{

			cin>>b[i][j];
		}
	}
}
void matrix::process()
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{

		 c[i][j]=a[i][j]+b[i][j];
		}
	}


}
void matrix::put()
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"\t"<<c[i][j];
		}
		cout<<endl;
	}

}
void main()
{
	clrscr();
	matrix M;
	M.get();
	M.process();
	M.put();
	getch();
}