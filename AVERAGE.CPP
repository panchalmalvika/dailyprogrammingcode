#include<iostream.h>
#include<conio.h>
void main()
{
	int n,i;
	float num[100],sum=0.0,ave;
	clrscr();
	cout<<"\nEnter the number of data : ";
	cin>>n;
	while(n>100 || n<=0)
	{
		cout<<"\nError! number should in range of(1 to 100).";
		cout<<"\nEnter the number again : ";
		cin>>n;
	}
	for(i=0;i<n;++i)
	{
		cout<<i+i<<"\nEnter number : ";
		cin>>num[i];
		sum+=num[i];
	}
	ave=sum/n;
	cout<<"\nAverage = "<<ave;
	getch();
}