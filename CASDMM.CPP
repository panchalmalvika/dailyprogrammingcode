#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b,ans,choice;
	clrscr();
	//code in C++ on addition,subtraction,moduluse,division,multiplicatin:
	cout<<"\nEnter a value:";
	cin>>a;
	cout<<"\nEnter a value:";
	cin>>b;
	ans=a+b;
	cout<<"\nAddition:"<<ans;
	ans=a-b;
	cout<<"\nSubtraction:"<<ans;
	ans=a*b;
	cout<<"\nMultiplication:"<<ans;
	ans=a%b;
	cout<<"\nModulus:"<<ans;
	ans=a/b;
	cout<<"\nDivision:"<<ans;
	getch();
}