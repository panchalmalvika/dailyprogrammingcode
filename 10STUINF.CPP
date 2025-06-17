#include<iostream.h>
#include<conio.h>
struct student
{
	char name[50];
	int rono;
	float marks;
}s[10];
void main()
{
	int i;
	clrscr();
	cout<<"\nEnter information of student : ";
	for(i=0;i<10;++i)
	{
		s[i].rono=i+1;
		cout<<"\nFor roll number "<<s[i].rono<<" : ";
		cout<<"\nEnter name: ";
		cin>>s[i].name;
		cout<<"\nEnter marks: ";
		cin>>s[i].marks;
	}
	cout<<"\nDisplaying information: ";
	for(i=0;i<10;++i)
	{
		cout<<"\nRoll number : "<<i+1;
		cout<<"name: "<<s[i].name;
		cout<<"\namrks: "<<s[i].marks;
	}
	getch();
}
