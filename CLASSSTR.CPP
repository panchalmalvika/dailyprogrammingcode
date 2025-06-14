#include<iostream.h>
#include<conio.h>
#include<string.h>
class string
{
	char a[50],b[50],c[50];
	int i,j,p;
	public:
		void geta()
		{
			cout<<"\nEnter string: ";
			cin>>a;
			i=strlen(a);
			cout<<"\nLength of string: "<<strlen(a);
			cout<<"\n\nEnter second string: ";
			cin>>b;
			j=strlen(b);
			cout<<"\nLength of string: "<<strlen(b);
			p=strcmp(a,b);
			if(p==0)
			{
				cout<<"\nBoth string are equal: ";
			}
			else
			{
				cout<<"\nBoth string are different: ";
			}
			strcat(a,b);
			strcpy(c,a);
			cout<<"\n\nMerge the string: "<<strcpy(c,a);
		}
};
void main()
{
	clrscr();
	string s1;
	s1.geta();
	getch();
}