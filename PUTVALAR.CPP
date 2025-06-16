#include<iostream.h>
#include<conio.h>
class arithmatic
{
	int a,b;
	public:
		void geta(int a,int b)
		{
			cout<<"\nEnter A : "<<a;
			cout<<"\nEnter B : "<<b;
			cout<<"\n\nAddition : "<<a+b;
			cout<<"\nSubtraction : "<<a-b;
			cout<<"\nmultiplication : "<<a*b;
			cout<<"\nDivision : "<<a/b;
			cout<<"\nModule : "<<a%b;
		}
};
void main()
{
	clrscr();
	arithmatic a1;
	a1.geta(20,10);
	getch();
}