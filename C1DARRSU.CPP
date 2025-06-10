#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b[5],sum=0;
	clrscr();
	for(a=0;a<5;a++)
	{
		cout<<"Enter a "<<a<<" value: ";
		cin>>b[a];
		sum=sum+b[a];
	}
	cout<<"\nSum of N: "<<sum;
	for(a=0;a<5;a++)
	{
		cout<<"\n\nA["<<a<<"] = "<<b[a];
	}
	getch();
}