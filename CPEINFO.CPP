#include<iostream.h>
#include<conio.h>
void main()
{
	int age;
	char name[40];
	clrscr();
	cout<<"\nEnter your name: ";
	cin>>name;
	cout<<"\nEnter your age: ";
	cin>>age;
	cout<<"\n----------------Personal information--------------------\n";
	cout<<"\nName: "<<name;
	cout<<"\nAge: "<<age;
	getch();
}