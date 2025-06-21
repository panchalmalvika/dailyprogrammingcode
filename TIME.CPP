#include<iostream.h>
#include<conio.h>
struct time
{
	int sec;
	int min;
	int hou;
};
void computeTimeDiffrent(struct time,struct time,struct time *);
void main()
{
	struct time t1,t2,difference;
	clrscr();
	cout<<"\nEnter start time.";
	cout<<"\nEnter hours, minutes and respectively: ";
	cin>>t1.hou>>t1.min>>t1.sec;
	cout<<"\nEnter stop time.";
	cout<<"\nEnter hours,minutes and second respectively: ";
	cin>>t2.hou>>t2.min>>t2.sec;
	computeTimeDifference(struct time t1)
	getch();
}