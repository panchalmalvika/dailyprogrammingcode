#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[20],b[20],c[20];
	int i,j;
	clrscr();
	cout<<"\nEnter one string : ";
	cin>>a;
	i=strlen(a);
	cout<<"Length of first : "<<i;
	cout<<"\n\nEnter second string : ";
	cin>>b;
	j=strlen(b);
	cout<<"Lenghth of second string : "<<j;
	strcmp(a,b);
	cout<<"\n\nCompare two string:";
	if(a==b)
	{
		cout<<"\nString are match:";
	}
	else
	{
		cout<<"\nString are different:";
	}
	cout<<"\n\nConcate two string: ";
	strcat(a,b);
	strcpy(c,a);
	cout<<"\nmerge string : "<<c;
	strrev(c);
	cout<<"\n\nReversed string:";
	cout<<"\nString: "<<c;
	getch();
}