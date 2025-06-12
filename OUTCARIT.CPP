#include<iostream.h>
#include<conio.h>
class arithmatic
{
	int a,b,c;
	public:
		void sum(void);
		void sub(void);
		void mul(void);
		void div(void);
		void mod(void);
};
void arithmatic :: sum(void)
{
	cout<<"\nlets take example of addition:\n";
	cout<<"Enter a value: ";
	cin>>a;
	cout<<"Enter a value: ";
	cin>>b;
	c=a+b;
	cout<<"Addition: "<<c;
}
void arithmatic :: sub(void)
{
	cout<<"\n\nlets take example of subtraction:\n";
	cout<<"Enter a value: ";
	cin>>a;
	cout<<"Enter a value: ";
	cin>>b;
	c=a-b;
	cout<<"Subtraction: "<<c;
}
void arithmatic :: mul(void)
{
	cout<<"\n\nlets take example of Multiplication:\n";
	cout<<"Enter a value: ";
	cin>>a;
	cout<<"Enter a value: ";
	cin>>b;
	c=a*b;
	cout<<"MUltiplication: "<<c;
}
void arithmatic :: div(void)
{
	cout<<"\n\nlets take example of division:\n";
	cout<<"Enter a value: ";
	cin>>a;
	cout<<"Enter a value: ";
	cin>>b;
	c=a/b;
	cout<<"Division: "<<c;
}
void arithmatic :: mod(void)
{
	cout<<"\n\nlets take example of module:\n";
	cout<<"Enter a value: ";
	cin>>a;
	cout<<"Enter a value: ";
	cin>>b;
	c=a%b;
	cout<<"Module: "<<c;
}
void main()
{
	clrscr();
	arithmatic a1;
	a1.sum();
	a1.sub();
	a1.mul();
	a1.div();
	a1.mod();
	getch();
}