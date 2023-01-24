#include<iostream.h>
#include<conio.h>

class alphabet
{

	public:
		int val;
		alphabet()
		{
			val=23;
		}
		alphabet(int x)
		{
		       val=x;
		}
		alphabet(alphabet &A)
		{
			  val=A.val;
		}
};
void main()
{
	clrscr();
	alphabet alpha;
	alphabet beta(alpha.val);//p constrctur
	alphabet theta=beta;//copy constructor
	alphabet gama=theta;
      //	alphabet a(alpha);
      //	alphabet b=alphabet(a);

	cout<<"\nval of alpha"<<alpha.val;
	cout<<"\nval of beta"<<beta.val;
	cout<<"\nval of theta"<<theta.val;
	cout<<"\nval of gama"<<gama.val;
	getch();
}