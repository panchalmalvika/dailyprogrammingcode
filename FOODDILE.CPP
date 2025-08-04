#include<iostream.h>
#include<conio.h>
void main()
{
	int choise=0,total,quantity,t1;
	int yes=1,no=0;
	clrscr();
	cout<<"\n************************ WELCOME TO FOOD BILLING SYSTEM ************************";
	cout<<"\n\t\t1. Samosa\t\tPrise = 20 Rs/pcs";
	cout<<"\n\t\t2. Dosa\t\t\tPrise = 120 Rs/pcs";
	cout<<"\n\t\t3. Alu Parotha\t\tPrise = 50 Rs/pcs";
	cout<<"\n\t\t4. Kachori\t\tPrise = 20 Rs/pcs";
	cout<<"\n\t\t5. French Fries\t\tPrise = 100 Rs/pcs";
	cout<<"\n\t\t6. Burger\t\tPrise = 150 Rs/pcs";
	cout<<"\n\t\t7. Chole Bhature\tPrise = 120 Rs/pcs";
	cout<<"\n\t\t8. Ice Creame\t\tPrise = 20 Rs/pcs";
	cout<<"\n\t\t9. Cone\t\t\tPrise = 20 Rs/pcs";
	cout<<"\n\n********************************************************************************\n";
	cout<<"\n\t\tAt a time only One Choice is Accept...";
	cout<<"\n\n********************************************************************************\n";
	cout<<"\n\t\t\tChoose One Option..";
	cin>>choise;
	cout<<"\n\n********************************************************************************\n";
	if(choise==1)
	{
		cout<<"\n\t\t\tYour Choice Is : Samosa";
		cout<<"\n\t\t\tEnter Quantity : ";
		cin>>quantity;
		total=quantity*20;
		cout<<"\n\n********************************************************************************\n";
		cout<<"\n\t\t\tTotal Amount Is : "<<total;
		cout<<"\n\n********************************************************************************\n";
	}
	else if(choise==2)
	{
		cout<<"\n\t\t\tYour Choice Is : Dosa";
		cout<<"\n\t\t\tEnter Quantity : ";
		cin>>quantity;
		total=quantity*120;
		cout<<"\n\n********************************************************************************\n";
		cout<<"\n\t\t\tTotal Amount Is : "<<total;
		cout<<"\n\n********************************************************************************\n";
	 }
	 else if(choise==3)
	 {
		cout<<"\n\t\t\tYour Choice Is : Alu Parotha";
		cout<<"\n\t\t\tEnter Quantity : ";
		cin>>quantity;
		total=quantity*50;
		cout<<"\n\n********************************************************************************\n";
		cout<<"\n\t\t\tTotal Amount Is : "<<total;
		cout<<"\n\n********************************************************************************\n";
	  }
	  else if(choise==4)
	  {
		cout<<"\n\t\t\tYour Choice Is : Kachori";
		cout<<"\n\t\t\tEnter Quantity : ";
		cin>>quantity;
		total=quantity*20;
		cout<<"\n\n********************************************************************************\n";
		cout<<"\n\t\t\tTotal Amount Is : "<<total;
		cout<<"\n\n********************************************************************************\n";
	 }
	 else if(choise==5)
	 {
		cout<<"\n\t\t\tYour Choice Is : French Fries";
		cout<<"\n\t\t\tEnter Quantity : ";
		cin>>quantity;
		total=quantity*100;
		cout<<"\n\n********************************************************************************\n";
		cout<<"\n\t\t\tTotal Amount Is : "<<total;
		cout<<"\n\n********************************************************************************\n";
	 }
	 else if(choise==6)
	 {
		cout<<"\n\t\t\tYour Choice Is : Burger";
		cout<<"\n\t\t\tEnter Quantity : ";
		cin>>quantity;
		total=quantity*150;
		cout<<"\n\n********************************************************************************\n";
		cout<<"\n\t\t\tTotal Amount Is : "<<total;
		cout<<"\n\n********************************************************************************\n";
	 }
	 else if(choise==7)
	 {
		cout<<"\n\t\t\tYour Choice Is : Chole Bhature ";
		cout<<"\n\t\t\tEnter Quantity : ";
		cin>>quantity;
		total=quantity*120;
		cout<<"\n\n********************************************************************************\n";
		cout<<"\n\t\t\tTotal Amount Is : "<<total;
		cout<<"\n\n********************************************************************************\n";
	 }
	 else if(choise==8)
	 {
		cout<<"\n\t\t\tYour Choice Is : Ice creame";
		cout<<"\n\t\t\tEnter Quantity : ";
		cin>>quantity;
		total=quantity*20;
		cout<<"\n\n********************************************************************************\n";
		cout<<"\n\t\t\tTotal Amount Is : "<<total;
		cout<<"\n\n********************************************************************************\n";
	 }
	 else if(choise==9)
	 {
		cout<<"\n\t\t\tYour Choice Is : Cone";
		cout<<"\n\t\t\tEnter Quantity : ";
		cin>>quantity;
		total=quantity*20;
		cout<<"\n\n********************************************************************************\n";
		cout<<"\n\t\t\tTotal Amount Is : "<<total;
		cout<<"\n\n********************************************************************************\n";
	 }
	 else
	 {
		cout<<"\n\t\t\tInvalid Choise....";
		cout<<"\n\n********************************************************************************\n";
	 }
	 cout<<"\n\t\t\tDo You You Want Another Order ?";
	 cout<<"\n\t\tYes then select 1,No then Select 0 : ";
	 cin>>yes;
	 if(yes==1)
	 {
			cout<<"\n\n********************************************************************************\n";
			cout<<"\n\t\t1. Samosa\t\tPrise = 20 Rs/pcs";
			cout<<"\n\t\t2. Dosa\t\t\tPrise = 120 Rs/pcs";
			cout<<"\n\t\t3. Alu Parotha\t\tPrise = 50 Rs/pcs";
			cout<<"\n\t\t4. Kachori\t\tPrise = 20 Rs/pcs";
			cout<<"\n\t\t5. French Fries\t\tPrise = 100 Rs/pcs";
			cout<<"\n\t\t6. Burger\t\tPrise = 150 Rs/pcs";
			cout<<"\n\t\t7. Chole Bhature\tPrise = 120 Rs/pcs";
			cout<<"\n\t\t8. Ice Creame\t\tPrise = 20 Rs/pcs";
			cout<<"\n\t\t9. Cone\t\t\tPrise = 20 Rs/pcs";
			cout<<"\n\n********************************************************************************\n";
			cout<<"\n\t\tAt a time only One Choice is Accept...";
			cout<<"\n\n********************************************************************************\n";
			cout<<"\n\t\t\tChoose One Option..";
			cin>>choise;
			cout<<"\n\n********************************************************************************\n";
			if(choise==1)
			{
				cout<<"\n\t\t\tYour Choice Is : Samosa";
				cout<<"\n\t\t\tEnter Quantity : ";
				cin>>quantity;
				t1=total+quantity*20;
				cout<<"\n\n********************************************************************************\n";
				cout<<"\n\t\t\tTotal Amount Is : "<<t1;
				cout<<"\n\n********************************************************************************\n";
			}
			else if(choise==2)
			{
				cout<<"\n\t\t\tYour Choice Is : Dosa";
				cout<<"\n\t\t\tEnter Quantity : ";
				cin>>quantity;
				t1=total+quantity*120;
				cout<<"\n\n********************************************************************************\n";
				cout<<"\n\t\t\tTotal Amount Is : "<<t1;
				cout<<"\n\n********************************************************************************\n";
			}
			else if(choise==3)
			{
				cout<<"\n\t\t\tYour Choice Is : Alu Parotha";
				cout<<"\n\t\t\tEnter Quantity : ";
				cin>>quantity;
				t1=total+quantity*50;
				cout<<"\n\n********************************************************************************\n";
				cout<<"\n\t\t\tTotal Amount Is : "<<t1;
				cout<<"\n\n********************************************************************************\n";
			}
			else if(choise==4)
			{
				cout<<"\n\t\t\tYour Choice Is : Kachori";
				cout<<"\n\t\t\tEnter Quantity : ";
				cin>>quantity;
				t1=total+quantity*20;
				cout<<"\n\n********************************************************************************\n";
				cout<<"\n\t\t\tTotal Amount Is : "<<t1;
				cout<<"\n\n********************************************************************************\n";
			}
			else if(choise==5)
			{
				cout<<"\n\t\t\tYour Choice Is : French Fries";
				cout<<"\n\t\t\tEnter Quantity : ";
				cin>>quantity;
				t1=total+quantity*100;
				cout<<"\n\n********************************************************************************\n";
				cout<<"\n\t\t\tTotal Amount Is : "<<t1;
				cout<<"\n\n********************************************************************************\n";
			}
			else if(choise==6)
			{
				cout<<"\n\t\t\tYour Choice Is : Burger";
				cout<<"\n\t\t\tEnter Quantity : ";
				cin>>quantity;
				t1=total+quantity*150;
				cout<<"\n\n********************************************************************************\n";
				cout<<"\n\t\t\tTotal Amount Is : "<<t1;
				cout<<"\n\n********************************************************************************\n";
			}
			else if(choise==7)
			{
				cout<<"\n\t\t\tYour Choice Is : Chole Bhature ";
				cout<<"\n\t\t\tEnter Quantity : ";
				cin>>quantity;
				t1=total+quantity*120;
				cout<<"\n\n********************************************************************************\n";
				cout<<"\n\t\t\tTotal Amount Is : "<<t1;
				cout<<"\n\n********************************************************************************\n";
			}
			else if(choise==8)
			{
				cout<<"\n\t\t\tYour Choice Is : Ice creame";
				cout<<"\n\t\t\tEnter Quantity : ";
				cin>>quantity;
				t1=total+quantity*20;
				cout<<"\n\n********************************************************************************\n";
				cout<<"\n\t\t\tTotal Amount Is : "<<t1;
				cout<<"\n\n********************************************************************************\n";
			}
			else if(choise==9)
			{
				cout<<"\n\t\t\tYour Choice Is : Cone";
				cout<<"\n\t\t\tEnter Quantity : ";
				cin>>quantity;
				t1=total+quantity*20;
				cout<<"\n\n********************************************************************************\n";
				cout<<"\n\t\t\tTotal Amount Is : "<<t1;
				cout<<"\n\n********************************************************************************\n";
			}
			else
			{
				cout<<"\n\t\t\tInvalid Choise....";
				cout<<"\n\n********************************************************************************\n";
			}
		}
		else if(no==0)
		{
			cout<<"\n\t\tThank You For Visiting Food Biling System..";
			cout<<"\n\t\t\t\tPlease Pay Bill "<<total;
		}
		else
		{
			cout<<"\n\t\tThank You For Visiting System.......";
		}
	 getch();
}