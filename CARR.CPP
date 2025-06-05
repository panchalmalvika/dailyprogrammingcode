#include<iostream.h>
#include<conio.h>
class array
{
	int arr[3],i,j;
	public:
	void getData()
	{
		cout<<"\nEnter a 5 value:";
		for(i=0;i<3;i++)
		{
			cout<<"\n"<<i;
			cin>>arr[i];
		}
		cout<<"The number are: ";
		for(j=0;j<3;j++)
		{
			cout<<arr[j]<<" ";
		}
	}
};
void main()
{
	array s1();
	clrscr();
	s1.getData();
	getch();
}