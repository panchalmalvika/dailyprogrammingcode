#include<iostream.h>
#include<conio.h>
class enter
{
	public:
		void create()
		{
			cout<<"\nmathod 1:";
		}
};
class print:public enter
{
	int a,b,c;
	public:
		void concate()
		{
			cout<<"\nEnter a value: "<<a;
			cin>>a;
		}
		void prepare()
		{
			cout<<"\nEnter a value: "<<b;
			cin>>b;
			c=a+b;
			cout<<"\nAddition: "<<c;
		}
};
void main()
{
	clrscr();
	print p1;
	p1.create();
	p1.concate();
	p1.prepare();
	getch();
}
