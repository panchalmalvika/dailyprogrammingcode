#include<iostream.h>
#include<conio.h>
void main()
{
	char name[60];
	int j,c,cpp,rno,t;
	double per;
	clrscr();
	cout<<"\nEnter a student name:";
	cin>>name;
	cout<<"\nEnter a student roll number: ";
	cin>>rno;
	cout<<"\nEnter a java marks: ";
	cin>>j;
	cout<<"\nEnter a c marks: ";
	cin>>c;
	cout<<"\nEnter a c++: ";
	cin>>cpp;
	t=j+c+cpp;
	cout<<"\n\nTotal marks: "<<t;
	per=t/3;
	cout<<"\nPercentage: "<<per;
	if(per>=85)
	{
		cout<<"\n\nDistinction";
	}
	else if(per>=75)
	{
		cout<<"\n\nFirst class";
	}
	else if(per>=65)
	{
		cout<<"\n\nSecond class";
	}
	else if(per>=50)
	{
		cout<<"\n\nPass class";
	}
	else
	{
		cout<<"\n\nFail";
	}
	getch();
}