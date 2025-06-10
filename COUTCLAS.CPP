#include<iostream.h>
#include<conio.h>
class employee
{
	char ename[50];
	int eage;
	public:
		void collectdata(void);
		void printdetail(void);
};
void employee :: collectdata(void)
{
	cout<<"\nEnter name of employee: ";
	cin>>ename;
	cout<<"\nEnter employee age: ";
	cin>>eage;
}
void employee :: printdetail(void)
{
	cout<<"\nEmployee name: "<<ename;
	cout<<"\nEmployee age: "<<eage;
}
int main()
{
	clrscr();
	employee e;
	e.collectdata();
	e.printdetail();
	getch();
}