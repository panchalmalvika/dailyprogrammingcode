#include<iostream.h>
#include<conio.h>
#define true
void main()
{
	int a,b,max;
	clrscr();
	cout<<"\nEnter two value: ";
	cin>>a>>b;
	max=(a>b)?a:b;
	do
	{
		if(max%a==0 && max%b==0)
		{
			cout<<"LCM: "<<max;
			break;
		}
		else
		{
			++max;
		}
	}while(true);
	getch();
}