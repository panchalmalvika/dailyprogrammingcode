#include<iostream.h>
#include<conio.h>
void main()
{
	int a[5],i,*p;
	clrscr();
	for(i=0;i<5;i++)
	{
		cout<<"\nEnter A["<<i<<"]: ";
		cin>>a[i];
	}
	p=&a[0];
	for(i=0;i<5;i++)
	{
		cout<<"\nA["<<i<<"]: "<<a[i]<<" & Address: "<<p++;
	}
	getch();
}