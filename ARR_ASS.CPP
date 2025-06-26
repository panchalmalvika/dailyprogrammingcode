#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a[5],temp;
	clrscr();
	//array with desending order:
	for(i=0;i<5;i++)
	{
		printf("\nEnter %d element:",i);
		scanf("\n%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nHere the assending tranformation:");
	for(i=0;i<5;i++)
	{
		printf("\nA[%d]: %d",i,a[i]);
	}
	getch();

}