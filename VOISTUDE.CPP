#include<iostream.h>
#include<conio.h>
void info()
{
	char a[10][30]={"Panchal Malvika","Darji Jagrat","Darji Amit","Darji Anisha","Panchal Kamini","Panchal Harshad"};
	for(int i=0;i<10;i++)
	{
		cout<<a[i]<<"\n";
	}
}
void main()
{
	clrscr();
	info();
	getch();
}