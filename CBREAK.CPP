#include<iostream.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	//code in c++ language on break statement:
	for(i=0;i<=10;i++)
	{
		if(i==5)
		{
			break;
		}
		else
		{
			cout<<"\nI: "<<i;
		}
	}
	getch();
}