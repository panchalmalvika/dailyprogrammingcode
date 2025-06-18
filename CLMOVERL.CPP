#include<iostream.h>
#include<conio.h>
class arithmatic
{
	public:
		void arith(int a,int b)
		{
			cout<<"\nEnter A : "<<a<<"\nEnter B : "<<b<<"\nAddition : "<<a+b;
		}
		void arith(int a)
		{
			cout<<"\nEnter A : "<<a<<"\nSubtraction : "<<a-a;
		}
		void arith(int a,int b,int c)
		{
			cout<<"\nEnter A : "<<a<<"\nEnter B : "<<b<<"\nEnter C : "<<c<<"\nMultiply : "<<a*b*c;
		}
};
void main()
{
	clrscr();
	arithmatic a1;
	a1.arith(10,20,30);
	a1.arith(10);
	a1.arith(10,20);
	getch();
}