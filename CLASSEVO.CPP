#include<iostream.h>
#include<conio.h>
class eo
{
	int a;
	public:
		void geta()
		{
			cout<<"\nEnter a value: ";
			cin>>a;
		}
		void puta()
		{
			cout<<"\n1. Value of A: "<<a;
			if(a%2==0)
			{
				cout<<"\nA is even number: ";
			}
			else
			{
				cout<<"\nA is odd
				number: ";
			}
		}
};
void main()
{
	clrscr();
	eo e1;
	e1.geta();
	e1.puta();
	getch();
}