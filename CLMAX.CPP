#include<iostream.h>
#include<conio.h>
class relation
{
	int a,b;
	public:
		void Relation(int a,int b)
		{
			cout<<"\nEnter a value : "<<a;
			cout<<"\nEnter a value : "<<b;
			if(a>b)
			{
				cout<<"\nA is max:";
			}
			else
			{
				cout<<"\nB is max";
			}
		}
};
void main()
{
	clrscr();
	relation r1;
	r1.Relation(10,20);
	getch();
}