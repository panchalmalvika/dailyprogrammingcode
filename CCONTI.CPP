#include<iostream.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	//code in c++ language on continue statement:
	for(i=0;i<=10;i++)
	{
		if(i==5)
		{
			continue;
		}
		else
		{
			cout<<"\nI: "<<i;
		}
	}
	getch();
}