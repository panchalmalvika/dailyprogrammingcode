#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b,c,e;
	clrscr();
	cout<<"Enter A : ";
	cin>>a;
	cout<<"Enter B : ";
	cin>>b;
	cout<<"\n--------------------------------------\n";
	cout<<"1. Addition";
	cout<<"\n2. Subtraction";
	cout<<"\n3. Multiplication";
	cout<<"\n4. Division";
	cout<<"\n5. Module";
	cout<<"\n--------------------------------------\n";
	cout<<"Enter your choise : ";
	cin>>e;
	cout<<"\n--------------------------------------\n";
	if(e==1)
	{
		c=a+b;
		cout<<"Addition is : "<<c;
	}
	else if(e==2)
	{
		c=a-b;
		cout<<"Subtraction is : "<<c;
	}
	else if(e==3)
	{
		c=a*b;
		cout<<"Multiplication is : "<<c;
	}
	else if(e==4)
	{
		c=a/b;
		cout<<"Division is :"<<c;
	}
	else if(e==5)
	{
		c=a%b;
		cout<<"Module is : "<<c;
	}
	getch();
}