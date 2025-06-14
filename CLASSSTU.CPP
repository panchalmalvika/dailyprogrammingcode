#include<iostream.h>
#include<conio.h>
class A
{
	char a[300],b[30];
	int i,j,m,e,h;
	public:
		A()
		{
			cout<<"\nEnter full name: ";
			cin>>a;
			cout<<"\nEnter roll number: ";
			cin>>i;
			cout<<"\nEnter student standard: ";
			cin>>j;
			cout<<"\nEnter maths marks: ";
			cin>>m;
			cout<<"\nEnter english marks: ";
			cin>>e;
			cout<<"\nEnter hindi marks: ";
			cin>>h;
			cout<<"\nTotal marks: "<<m+e+h;
			cout<<"\nPercentage: "<<m+e+h/3;
		}
};
void main()
{
	clrscr();
	A a1;
	getch();
}