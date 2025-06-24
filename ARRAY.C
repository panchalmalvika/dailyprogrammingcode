#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3],b[3],c[3],i,j,*p,temp;
	clrscr();
	printf("\n");
	for(i=0;i<3;i++)
	{
		printf("Enter A[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("\n\nPrint address :");
	for(i=0;i<3;i++)
	{
		printf("\nAddress of A[%d] : %d Address : %u ",i,a[i],p);
	}
	printf("\n\n\nPrint Assending order:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<3;i++)
	{
		printf("\nA[%d] : ",a[i]);
	}
	printf("\n\n\nPrint Desending order:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<3;i++)
	{
		printf("\nA[%d] : ",a[i]);
	}
	printf("\n\n\nPut another values:\n");
	for(i=0;i<3;i++)
	{
		printf("Enter B[%d] : ",i);
		scanf("%d",&b[i]);
	}
	printf("\n\nPrint address :");
	for(i=0;i<3;i++)
	{
		printf("\nAddress of B[%d] : %d Address : %u ",i,b[i],p);
	}
	printf("\n\n\nPrint Assending order:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<3;i++)
	{
		printf("\nB[%d] : ",b[i]);
	}
	printf("\n\n\nPrint desending order:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i]>a[j])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	for(i=0;i<3;i++)
	{
		printf("\nB[%d] : ",b[i]);
	}
	printf("\n\n\nAddition :\n");
	for(i=0;i<3;i++)
	{
		c[i]=a[i]+b[i];
	}
	for(i=0;i<3;i++)
	{
		printf("\nC[%d] : ",c[i]);
	}
	getch();
}