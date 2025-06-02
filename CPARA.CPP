#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	for(a=0;a<10;a++)
	{
		for(b=0;b<9-a;b++)
		{
			cout<<" ";
		}
		for(c=0;c<=a;c++)
		{
			cout<<" *";
		}
		cout<<"\n";
	}
	for(a=9;a>=0;a--)
	{
		for(b=0;b<9-a;b++)
		{
			cout<<" ";
		}
		for(c=0;c<=a;c++)
		{
			cout<<" *";
		}
		cout<<"\n";
	}
	getch();
}