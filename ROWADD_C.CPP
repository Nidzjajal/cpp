#include<iostream.h>
#include<conio.h>

class matrix
{
	int  a[3][3],row,col;
	int i,j;
	public:
		void get();
		void process();

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

}
void matrix::process()
{
	for(i=0;i<3;i++)
	{
		int sum=0;
		for(j=0;j<3;j++)
		{
			sum=sum+a[i][j];
		}
		cout<<"\ntotal of row "<<i<<":"<<sum;

	}

	for(i=0;i<3;i++)
	{
		int sum=0;
		for(j=0;j<3;j++)
		{
			sum=sum+a[j][i];
		}
		cout<<"\ntotal of col "<< i<<":"<<sum;

	}


}

void main()
{
	clrscr();
	matrix M;
	M.get();
	M.process();

	getch();
}