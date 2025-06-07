#include<iostream.h>
#include<conio.h>
class A
{
	int a;
	public:
		void geta()
		{
			cout<<"\nEnter a value of A: ";
			cin>>a;
		}
		void puta()
		{
			cout<<"\nA: "<<a;
		}
};
class B
{
	int b;
	public:
		void getb()
		{
			cout<<"\nEnter a value of B: ";
			cin>>b;
		}
		void putb()
		{
			cout<<"\nB: "<<b;
		}
};
class C:public A,public B
{
	int c;
	public:
		void getc()
		{
			cout<<"\nEnter a value of C: ";
			cin>>c;
		}
		void putc()
		{
			cout<<"\nC: "<<c;
		}
};
void main()
{
	clrscr();
	C c1;
	c1.geta();
	c1.getb();
	c1.getc();
	c1.puta();
	c1.putb();
	c1.putc();
	getch();
}