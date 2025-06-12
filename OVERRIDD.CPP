#include<iostream.h>
#include<conio.h>
class A
{
	public:
	A()
	{
		cout<<"\n1. method:";
	}
	void showb(int a,int b)
	{
		cout<<"\nA value:"<<a;
		cout<<"\nB value:"<<b;
		cout<<"\nAddition:"<<a+b;
	}
};
class B:public A
{
	public:
	B()
	{
		cout<<"\n2.method:";
	}
	void showa(int x)
	{
		cout<<"\nX value:"<<x;
	}
};
class C:public B
{
	public:
	C()
	{
		cout<<"\n3.method:";
	}
	void showc()
	{
		cout<<"\nshow 3.";
	}
};
void main()
{
	clrscr();
	C c1;
	c1.showc();
	c1.showb(10,20);
	c1.showa(10);
	getch();
}