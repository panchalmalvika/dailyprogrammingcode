#include<iostream.h>
#include<conio.h>
class minmax
{
	int a,b;
	public:
		void geta()
		{
			cout<<"\nEnter a value: ";
			cin>>a;
			cout<<"\nEnter a value: ";
			cin>>b;
		}
		void puta()
		{
			cout<<"\n1. A value: "<<a;
			cout<<"\n2. B value: "<<b;
			if(a>b)
			{
				cout<<"\n\nA is maximum then b: ";
			}
			else
			{
				cout<<"\n\nB is maximum then A: ";
			}
		}
};
void main()
{
	clrscr();
	minmax m1;
	m1.geta();
	m1.puta();
	getch();
}