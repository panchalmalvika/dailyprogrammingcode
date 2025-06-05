#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	cout<<"\nEnter value:";
	cin>>a;
	cout<<"\nEnter value:";
	cin>>b;
	c=a+b;
	cout<<"\nAddition:"<<c;
	c=a-b;
	cout<<"\nSubtraction:"<<c;
	c=a*b;
	cout<<"\nMultiplication:"<<c;
	if(b!=0)
	{
		c=a/b;
		cout<<"\nDivision:"<<c;
		c=a%b;
		cout<<"\nmodul:"<<c;
	}
	else
	{
		cout<<"\nError to divided by zero:";
	}
	getch();
}