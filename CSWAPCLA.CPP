#include<iostream.h>
#include<conio.h>
class swap
{
	int a,b,t;
	public:
		void geta()
		{
			cout<<"\nEnter value of A: ";
			cin>>a;
			cout<<"\nEnter value of B: ";
			cin>>b;
			cout<<"\nAfter swaping: ";
			t=a;
			a=b;
			b=t;
			cout<<"\nA: "<<a<<" \nB: "<<b;
		}
		void puta()
		{
			cout<<"\nAddition: "<<a+b;
			cout<<"\nSubtraction: "<<a-b;
			cout<<"\nMultiplication: "<<a*b;
			cout<<"\nDivision: "<<a/b;
			cout<<"\nModule: "<<a%b;
		}
};
void main()
{
	clrscr();
	swap s1;
	s1.geta();
	s1.puta();
	getch();
}