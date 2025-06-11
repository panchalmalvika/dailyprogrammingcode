#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j,a[4],t;
	clrscr();
	for(i=0;i<4;i++)
	{
		cout<<"Enter "<<i<<" value: ";
		cin>>a[i];
	}
	cout<<"\n\nprint value:\n";
	for(i=0;i<4;i++)
	{
		cout<<"\nA["<<i<<"]= "<<a[i];
	}
	cout<<"\n\nAssending order:\n";
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(a[i]<a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=0;i<4;i++)
	{
		cout<<"\nA["<<i<<"]= "<<a[i];
	}
	cout<<"\n\ndesending order:\n";
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=0;i<4;i++)
	{
		cout<<"\nA["<<i<<"]= "<<a[i];
	}
	getch();
}