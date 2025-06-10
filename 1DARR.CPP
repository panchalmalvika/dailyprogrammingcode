#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b[5];
	clrscr();
	for(a=0;a<5;a++)
	{
		cout<<"Enter a "<<a<<" value: ";
		cin>>b[a];
	}
	for(a=0;a<5;a++)
	{
		cout<<"\nA["<<a<<"] = "<<b[a];
	}
	getch();
}