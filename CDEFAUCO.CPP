#include<iostream.h>
#include<conio.h>
class arithmatic
{
	int a,b,c;
	//defualt statement on c++
	public:
		arithmatic()
		{
			a=10;
			b=20;
		}
		void sum()
		{
			c=a+b;
			cout<<"\nAddition: "<<c;
		}
		void sub()
		{
			c=a-b;
			cout<<"\nSubtraction: "<<c;
		}
		void mul()
		{
			c=a*b;
			cout<<"\nMultiplication: "<<c;
		}
		void div()
		{
			c=a/b;
			cout<<"\nDivision: "<<c;
		}
		void mod()
		{
			c=a%b;
			cout<<"\nModule: "<<c;
		}
};
void main()
{
	clrscr();
	arithmatic a1;
	a1.sum();
	a1.sub();
	a1.mul();
	a1.div();
	a1.mod();
	getch();
}