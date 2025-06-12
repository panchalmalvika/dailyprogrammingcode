#include<iostream.h>
#include<conio.h>
int factorial(int);
int main()
{
	int n,result;
	clrscr();
	cout<<"\nEnter non nagetive no.:";
	cin>>n;
	result=factorial(n);
	cout<<"\nFactorial of "<<n<<" = "<<result;
	getch();
}
int factorial(int n)
{
	if(n>1)
	{
		return n*factorial(n-1);
	}
	else
	{
		return 1;
	}
}
