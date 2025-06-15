#include<iostream.h>
#include<conio.h>
class Continue
{
	int a;
	public:
		Continue()
		{
			for(a=0;a<10;a++)
			{
				if(a==5)
				{
					continue;
				}
				else
				{
					cout<<"\n"<<a;
				}
			}
		}
};
void main()
{
	clrscr();
	Continue b1;
	getch();
}