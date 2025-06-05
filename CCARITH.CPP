#include<iostream.h>
#include<conio.h>
class Arithmatic
{
	int a,b,c,choice;
	public:
		void getData()
		{
			cout<<"\nEnter a value:";
			cin>>a;
			cout<<"\nEnter b value:";
			cin>>b;
		}
		void putData()
		{
			cout<<"\nValue of A: "<<a;
			cout<<"\nValue of B: "<<b;
			cout<<"\n\n1.Addition:";
			cout<<"\n2.subtraction:";
			cout<<"\n3.Multiplication:";
			cout<<"\n4.Division:";
			cout<<"\n5.moduluse:";
			cout<<"\n\nEnter your choice: ";
			cin>>choice;
			switch(choice)
			{
				case 1:
					c=a+b;
					cout<<"add A:"<<a<<" & B:"<<b<<" :"<<c;
					break;
				case 2:
					c=a-b;
					cout<<"subtract A:"<<a<<" & B:"<<b<<" :"<<c;
					break;
				case 3:
					c=a*b;
					cout<<"multiply A:"<<a<<" & B:"<<b<<" :"<<c;
					break;
				case 4:
					c=a/b;
					cout<<"Divide A:"<<a<<" & B:"<<b<<" :"<<c;
					break;
				case 5:
					c=a%b;
					cout<<"module A:"<<a<<" & B:"<<b<<" :"<<c;
					break;
				defult:
					cout<<"you have wrong choice:";
					break;
			}
		}
};
void main()
{
	Arithmatic s1;
	clrscr();
	s1.getData();
	s1.putData();
	getch();
}