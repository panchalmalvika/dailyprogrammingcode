#include<iostream.h>
#include<conio.h>
class Student
{
	int rno,m,j,c,cpp,total,per;
	char *sname;
	public:
		void getData()
		{
			cout<<"\nEnter a name:";
			cin>>sname;
			cout<<"\nEnter a roll no.:";
			cin>>rno;
			cout<<"\nEnter maths marks:";
			cin>>m;
			cout<<"\nEnter a java marks:";
			cin>>j;
			cout<<"\nEnter a c marks:";
			cin>>c;
			cout<<"\nEnter a c++ marks:";
			cin>>cpp;
			total=m+j+c+cpp;
			per=total/4;
		}
		void putData()
		{
			cout<<"\nStudent Name:"<<sname;
			cout<<"\nRoll number:"<<rno;
			cout<<"\nMaths marks:"<<m;
			cout<<"\nJava marks:"<<j;
			cout<<"\nC marks:"<<c;
			cout<<"\nC++ marks:"<<cpp;
			cout<<"\nTotal marks:"<<total;
			cout<<"\npercentage of marks:"<<per;
			if(per>=85)
			{
				cout<<"\nDistintion:";
			}
			else if(per>=70)
			{
				cout<<"\nFirst clas:";
			}
			else if(per>=60)
			{
				cout<<"\nSecond class:";
			}
			else if(per>=50)
			{
				cout<<"\nPass class:";
			}
			else if(per>=40)
			{
				cout<<"\nFail:";
			}
		}
};
void main()
{
	Student s1;
	clrscr();
	s1.getData();
	s1.putData();
	getch();
}
