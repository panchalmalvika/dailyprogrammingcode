#include<iostream.h>
#include<conio.h>
class heart
{
	int n,row,col;
	public:
		heart()
		{
			n=6;
			for(row=0;row<n;row++)
			{
				for(col=0;col<n+1;col++)
				if((row==0 && col%2!=0) || (row==1 && col%3==0) || (row+col==8))
				{
					cout<<"*";
				}
				else
				{
					cout<<" ";
				}
				cout<<"\n";
			}
		}
};
void main()
{
	clrscr();
	heart h1;
	getch();
}