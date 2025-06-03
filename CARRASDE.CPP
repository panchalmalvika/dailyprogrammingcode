#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b,c[3],temp;
	clrscr();
	for(a=0;a<3;a++)
	{
		cout<<"\nEnter a value "<<a<<" :";
		cin>>c[a];
	}
	cout<<"\n\nPrint all value:\n";
	for(a=0;a<3;a++)
	{
		cout<<"\nA["<<a<<"] :"<<c[a];
	}
	cout<<"\n\narray arrange in asending order:";
	for(a=0;a<3;a++)
	{
		for(b=0;b<3;b++)
		{
			if(c[a]<c[b])
			{
				temp=c[a];
				c[a]=c[b];
				c[b]=temp;
			}
		}
	}
	for(a=0;a<3;a++)
	{
		cout<<"\nC["<<a<<"] :"<<c[a];
	}
	cout<<"\n\narray arrange in desending order:";
	for(a=0;a<3;a++)
	{
		for(b=0;b<3;b++)
		{
			if(c[a]>c[b])
			{
				temp=c[a];
				c[a]=c[b];
				c[b]=temp;
			}
		}
	}
	for(a=0;a<3;a++)
	{
		cout<<"\nC["<<a<<"] :"<<c[a];
	}
	for(b=0;b<3;b++)
	{
		cout<<"\n\nEnter a value "<<b<<" :";
		cin>>c[b];
	}
	cout<<"\n\nPrint all value:\n";
	for(b=0;b<3;b++)
	{
		cout<<"\nB["<<b<<"] :"<<c[b];
	}
	cout<<"\n\narray arrange in asending order:";
	for(a=0;a<3;a++)
	{
		for(b=0;b<3;b++)
		{
			if(c[a]<c[b])
			{
				temp=c[a];
				c[a]=c[b];
				c[b]=temp;
			}
		}
	}
	for(a=0;a<3;a++)
	{
		cout<<"\nC["<<a<<"] :"<<c[a];
	}
	cout<<"\n\narray arrange in desending order:";
	for(a=0;a<3;a++)
	{
		for(b=0;b<3;b++)
		{
			if(c[a]>c[b])
			{
				temp=c[a];
				c[a]=c[b];
				c[b]=temp;
			}
		}
	}
	for(a=0;a<3;a++)
	{
		cout<<"\nC["<<a<<"] :"<<c[a];
	}
	getch();



}