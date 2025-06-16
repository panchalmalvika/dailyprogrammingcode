#include<iostream.h>
#include<conio.h>
class tops
{
	int a,b,c;
	public:
		void geta(int x,int y,int z)
		{
			a=x;
			b=y;
			c=z;
		}
		void puta()
		{
			cout<<"\nA: "<<a<<"\nB: "<<b<<"\nC: "<<c;
		}
		void operator-()
		{
			a=-a;
			b=-b;
			c=-c;
		}
};
void main()
{
	clrscr();
	tops t1;
	t1.geta(10,-20,30);
	cout<<"\nBefore -operator overload:\n";
	t1.puta();
	-t1;
	cout<<"\n";
	cout<<"\nAfter -operator overload:\n";
	t1.puta();
	getch();
}