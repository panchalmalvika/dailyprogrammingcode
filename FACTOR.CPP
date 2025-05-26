#include<stdio.h>
#include<conio.h>
void main()
{
	int num,i;
	clrscr();
	printf("\nEnter a value:");
	scanf("%d",&num);
	printf("\nFactor of %d are:",num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0){
			printf("\n%d",i);
		}
	}
	getch();
}