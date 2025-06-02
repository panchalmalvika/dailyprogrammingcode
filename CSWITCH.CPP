#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b,ans,choice;
	clrscr();
	//code in C++ on switch case:
	cout<<"\nEnter a value:";
	cin>>a;
	cout<<"\nEnter a value:";
	cin>>b;
	cout<<"\n\n1.Addition:";
	cout<<"\n2.Subtraction:";
	cout<<"\n3.Multiplication:";
	cout<<"\n4.Modulus:";
	cout<<"\n5.Division:";
	cout<<"\n\nEnter your choice:";
	cin>>choice;
	switch(choice)
	{
		case 1:
			ans=a+b;
			cout<<"\nAddition:"<<ans;
			break;
		case 2:
			ans=a-b;
			cout<<"\nSubtraction:"<<ans;
			break;
		case 3:
			ans=a*b;
			cout<<"\nMultiplication:"<<ans;
			break;
		case 4:
			ans=a%b;
			cout<<"\nModuluse:"<<ans;
			break;
		case 5:
			ans=a/b;
			cout<<"\nDivision:"<<ans;
			break;

	}
	getch();
}