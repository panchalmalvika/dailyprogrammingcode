#include<iostream.h>
#include<conio.h>
void main()
{
	//code in c++ on find the address:
	double a,*p;
	clrscr();
	cout<<"\nEnter a value in point form:";
	cin>>a;
	p=&a;
	cout<<"\nA: "<<a;
	cout<<"\naddress of "<<a<<" : "<<p;
	cout<<"\n*p: "<<*p;
	getch();
}