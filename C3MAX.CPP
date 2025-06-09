#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	//code on c++ on find the max value of 3 number:
	cout<<"\nEnter a value:";
	cin>>a;
	cout<<"\nEnter a value:";
	cin>>b;
	cout<<"\nEnter a value:";
	cin>>c;
	if(a>b)
	{
		if(a>c)
		{
			cout<<"\nA is max";
		}
		else
		{
			cout<<"\nC is max";
		}

	}
	else if(b>c)
	{
		cout<<"\nB is max";
	}
	else
	{
		cout<<"\nC is max";
	}
	getch();
}