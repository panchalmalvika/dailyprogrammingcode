#include<iostream.h>
#include<conio.h>
//constructor chaining on c++:
class A
{
	public:
		A()
		{
			cout<<"\n1.default constructor:";
		}
		void show1()
		{
			cout<<"\n1.hello:";
		}
};
class B:public A
{
	public:
		B()
		{
			cout<<"\n2.paramiterzed constructor:";
		}
		void show2()
		{
			cout<<"\n2.hello:";
		}
};
class C:public B
{
	public:
		C()
		{
			cout<<"\n3.copy constructor:";
		}
		void show3()
		{
			cout<<"\n3.hello:";
		}
};
void main()
{
	clrscr();
	C c1;
	c1.show1();
	c1.show2();
	c1.show3();
	getch();
}