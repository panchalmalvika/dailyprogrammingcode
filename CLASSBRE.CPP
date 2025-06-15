#include<iostream.h>
#include<conio.h>
class Break
{
	int a;
	public:
		Break()
		{
			for(a=0;a<10;a++)
			{
				if(a==5)
				{
					break;
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
	Break b1;
	getch();
}