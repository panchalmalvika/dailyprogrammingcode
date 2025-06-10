#include<iostream.h>
#include<conio.h>
class a
{
	int a,b,c;
	public:
		void geta()
		{
			cout<<"\nEnter a value: ";
			cin>>a;
		}
		void puta()
		{
			cout<<"\nEnter a value: ";
			cin>>b;
		}
		void sum()
		{
			c=a+b;
			cout<<"\nAddition: "<<c;
		}
};
class b
{
	int x,y,z;
	public:
		void getb()
		{
			cout<<"\n\nEnter a value: ";
			cin>>x;
		}
		void putb()
		{
			cout<<"\nEnter a value: ";
			cin>>y;
		}
		void sub()
		{
			z=x-y;
			cout<<"\nSubtraction: "<<z;
		}
};
class c:public a,public b
{
	int c,a,b;
	public:
		void getc()
		{
			cout<<"\n\nEnter a value: ";
			cin>>a;
			cout<<"\nEnter a value: ";
			cin>>b;
			c=a*b;
			cout<<"\nmultiplication: "<<c;
		}
};
void main()
{
	clrscr();
	c c1;
	c1.geta();
	c1.puta();
	c1.sum();
	c1.getb();
	c1.putb();
	c1.sub();
	c1.getc();
	getch();

}