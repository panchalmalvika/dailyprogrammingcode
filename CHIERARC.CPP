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
class B:public A
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
class C:public A
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
class D:public A
{
	int d;
	public:
		void getd()
		{
			cout<<"\nEnter a value of D: ";
			cin>>d;
		}
		void putd()
		{
			cout<<"\nD: "<<d;
		}
};
void main()
{
	clrscr();
	B b1;
	C c1;
	D d1;
	b1.geta();
	b1.getb();
	c1.getc();
	d1.getd();
	b1.puta();
	b1.putb();
	c1.putc();
	d1.putd();
	getch();
}