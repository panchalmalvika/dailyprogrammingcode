#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],*p,i;
	clrscr();
	printf("\nEnter array element:\n\n");
	for(i=0;i<5;i++)
	{
		printf("Enter %d value:",i);
		scanf("%d",&a[i]);
	}
	p=&a[0];
	printf("\nArray element with there Address:\n");
	for(i=0;i<5;i++)
	{
		printf("\nA[%d]: %d & address is %u",i,a[i],p);
	}
	getch();
}