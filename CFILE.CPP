#include<iostream.h>
#include<conio.h>
void main()
{
	FILE *fp;
	char name[50];
	int r,t,j,c;
	double p;
	clrscr();
	fp=fopen("sinfo.txt","w");

	cout<<"\nEnter student name: ";
	cin>>name;

	cout<<"\nEnter student roll number: ";
	cin>>r;

	cout<<"\nEnter java marks: ";
	cin>>j;

	cout<<"\nEnter c marks: ";
	cin>>c;
	fclose(fp);
	getch();
}