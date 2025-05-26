#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a=0,b=1,next;
	clrscr();
	printf("Enter the number:");
	scanf("%d",&n);
	printf("\nFibonacci series are A:%d & B:%d",a,b);
	for(int i=2;i<n;i++)
	{
		next=a+b;
		printf("\n%d",next);
		a=b;
		b=next;
	}
	getch();
}