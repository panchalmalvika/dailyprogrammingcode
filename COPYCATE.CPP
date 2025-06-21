#include<iostream.h>
#include<conio.h>
#include<string.h>
class cpconcate
{
	char s1[40],s2[40];
	public:
		void cate()
		{
			cout<<"\nEnter one string : ";
			cin>>s1;
			s2=s1;
			cout<<"S1 : "<<s1;
			cout<<"S2 : "<<s2;
		}
};
void main
{
	clrscr();
	cpconcate c1;
	c1.cate();
	getch();
}