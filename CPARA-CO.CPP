#include<iostream.h>
#include<conio.h>
class arithmatic
{
	int A,B;
	int add,sub,mul,div,mod;
	public:
		arithmatic(int a,int s,int m,int M,double d)
		{
			a=add;
			s=sub;
			m=mul;
			d=div;
			M=mod;
		}
		void cal()
		{
			add=A+B;
			cout<<"\nAddition: "<<add;
			sub=A-B;
			cout<<"\nSubtraction: "<<sub;
			mul=A*B;
			cout<<"\nMultiplication: "<<mul;
			div=A/B;
			cout<<"\nDivision: "<<div;
			mod=A%B;
			cout<<"\nModule: "<<mod;
		}
};
void main()
{
	clrscr();
	arithmatic a1(10,20);
	a1.cal();
	getch();
}
