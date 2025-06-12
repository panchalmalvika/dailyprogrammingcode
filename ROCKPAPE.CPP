#include<iostream.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
class rockpaperscissor
{
	char name[50];
	int round,choice;
	int i,com;
	public:
		void getplayername()
		{
			cout<<"\nEnter your name: ";
			cin>>name;
		}
		void playgame()
		{
			cout<<"\n"<<name<<"\nHow many round you want to play: ";
			cin>>round;
			int pscore=0;
			int cscore=0;
			for(i=1;i<=round;i++)
			{
				srand(time(0));
				cout<<"\nround no: "<<i<<"/"<<round<<"\n";
				cout<<"\n_*"<<name<<" score = "<<pscore;
				cout<<"\n_* computer score = "<<cscore;
				cout<<"\n1) rock\n";
				cout<<"\n2) paper\n";
				cout<<"\n3) scissor\n";
				cout<<"\n\n-> select youe choice:";
				cin>>choice;
				if(choice<1 || choice>3)
				{
					cout<<"\n\nEnter valid choice between 1-3\n";
					continue;
				}
				int com;
				com=rand()%3+1;
				if(choice== com)
				{
					cout<<"\nIt's round draw\n";
				}
				else if(choice==1 && com==3)
				{
					cout<<"\n\nThis round you win!\n";
					pscore++;
				}
				else
				{
					cout<<"\n\nThis round computer win!\n";
					cscope++;
				}
				cout<<name<<"choice= "<choice<<" | computer choice: "<<com;
			}
			if(pscore>cscore)
			{
				cout<<"\n\nFinally you win!\n";
			}
			else if(cscore>pscore)
			{
				cout<<"\n\nFinally computer win!\n";
			}
			else
			{
				cout<<"\n\nDraw";
			}
			cout<<"\nThank you! "<<name<<"playing game";
		}
};
void main()
{
	clrscr();
	rockpaperscissor r1;
	r1.getplayername();
	r1.playgame();
	getch();
}