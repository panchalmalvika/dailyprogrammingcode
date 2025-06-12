#include<iostream.h>
#include<conio.h>
class A
{
	int a,b;
	public:
		void geta()
		{
			cout<<"\nAddition:\n";
			cout<<"Enter A: ";
			cin>>a;
			cout<<"Enter B: ";
			cin>>b;
		}
		void puta()
		{
			cout<<"\nAddition: "<<a+b;
		}
};
class B:public A
{
	int x,y;
	public:
		void getb()
		{
			cout<<"\nSubtraction:\n";
			cout<<"Enter X: ";
			cin>>x;
			cout<<"Enter Y: ";
			cin>>y;
		}
		void putb()
		{
			cout<<"\nSubtraction: "<<x-y;
		}
};
class C:public A
{
	int p,q;
	public:
		void getc()
		{
			cout<<"\nMultiplication:\n";
			cout<<"Enter P: ";
			cin>>p;
			cout<<"Enter Q: ";
			cin>>q;
		}
		void putc()
		{
			cout<<"\nMUltiplication: "<<p*q;
		}
};
class D:public B,public C
{
	int m,j;
	public:
		void getd()
		{
			cout<<"\nDIVISION:\n";
			cout<<"Enter M: ";
			cin>>m;
			cout<<"Enter J: ";
			cin>>j;
		}
		void putd()
		{
			cout<<"\nDivision: "<<m/j;
		}
};
void main()
{
	clrscr();
	B b1;
	D d1;
	b1.geta();
	d1.getb();
	d1.getc();
	d1.getd();
	b1.puta();
	d1.putb();
	d1.putc();
	d1.putd();
	getch();
}