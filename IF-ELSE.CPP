#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	cout<<"\nEnter A:";
	cin>>a;
	cout<<"\nEnter B:";
	cin>>b;
	cout<<"\nEnter C:";
	cin>>c;
	if(a<b)
	{
		if(a<c)
		{
			cout<<"\nA is max";
		}
		else
		{
			cout<<"\nB is max";
		}
	}
	else if(b>a)
	{
		cout<<"\nb is max";
	}
	else
	{
		cout<<"\nC is max";
	}
	getch();
}