#include<iostream.h>
#include<conio.h>
void main()
{
	int n1,n2,hcf,t,i;
	clrscr();
	cout<<"\nEnter two value: ";
	cin>>n1>>n2;
	if(n2>n1)
	{
		t=n2;
		n2=n1;
		n1=t;
	}
	for(i=1;i<=n2;++i)
	{
		if(n1%i==0 && n2%i==0)
		{
			hcf=i;
		}
	}
	cout<<"HCF: "<<hcf;
	getch();
}