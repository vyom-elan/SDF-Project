#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	int option=0, popt, popt1, qty;
	char sandwich_1[]="Club Sandwich", sandwich_2[]="Chicken Crispy Sandwich", sandwich_3[]="Extream Veg Sandwich";
	char fname[30], piz1[]="Chicken Fazita" ,piz2[]="Chicken Bar BQ" ,piz3[]="Peri Peri", burger_2[]="Chicken Burger";
	char fried1[]="Chicken Fried", fried2[]="Prawn Fried", fried3[]="Beef Fried",gotobeginning ,burger_3[]="Beef Burger";
	char piz4[]="Creamy Max", drinks1[]="Pepsi", drinks2[]="Thumbs Up", drinks3[]="Fanta",burger_1[]="Zinger Burger";
	starting:
	system("cls");
	cout<<"\t\t\t|-------------------------------------------------------|\n";
	cout<<"\t\t\t|              XYZ Fast Food Ordering System        |\n";
	cout<<"\t\t\t|-------------------------------------------------------|\n\n";
	cout<<"Please enter your name: ";
	cin.getline(fname, 20);
	cout<<"Hello "<<fname<<"\n\nWhat would you like to order?\n\n";

	cout<<"\t\t\t|-------------------------------------------------------|\n";
	cout<<"\t\t\t|                        Menu                           |\n";
	cout<<"\t\t\t|-------------------------------------------------------|\n\n";

	cout<<"[Choice 1] Pizzas\n";
	cout<<"[Choice 2] Burgers\n";
	cout<<"[Choice 3] Sandwich\n";
	cout<<"[Choice 4] Drinks\n";
	cout<<"[Choice 5] Fried\n\n";
	cout<<"\nPlease Enter your Choice: ";
	cin>>option;

	if(option==1)
	 {
		cout<<"\n1) "<<piz1<<"\n";
		cout<<"2) "<<piz2<<"\n";
		cout<<"3) "<<piz3<<"\n";
		cout<<"4) "<<piz4<<"\n";
		cout<<"\nPlease Enter which Pizza Flavor would you like to have?:";
		cin>>popt;
		if(popt>=1 && popt<=5)
		{
			cout<<"\n1) Small 250.00\n"<<"2) Regular 500.00\n"<<"3) Large 900.00\n";
			cout<<"\nChoose Size Please:";
			cin>>popt1;
			if(popt1>=1 && popt1<=3)
			cout<<"\nPlease Enter Quantity: ";
			cin>>qty;
			switch(popt1)
			{
			case 1: option = 250.00*qty;
			break;

			case 2: option = 500.00*qty;
			break;

			case 3: option = 900.00*qty;
			break;


			      }
			system("cls");
			switch (popt1)
			{
			 case 1:
			 cout<<"\t\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<piz1;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\n\nThank you For Ordering From XYZ Fast Food\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<"  "<<piz2;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From XYZ Fast Food\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<piz3;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From XYZ Fast Food\n";
			 break;
			 case 4:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<piz4;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From XYZ Fast Food\n";
			 break;

			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotobeginning;
			if(gotobeginning=='Y' || gotobeginning=='y')
			{
			  goto starting;
            }

		}

	 }


	 else if(option==2)
	 {
		cout<<"\n1 "<<burger_1<<" 180"<<"\n";
		cout<<"2 "<<burger_2<<" 150"<<"\n";
		cout<<"3 "<<burger_3<<" 160"<<"\n";
		cout<<"\nPlease Enter which Burger you would like to have?: ";
		cin>>popt1;
		if(popt1>=1 && popt1<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>qty;
			switch(popt1)
			{
			case 1: option = 180.00*qty;
			break;

			case 2: option = 150.00*qty;
			break;

			case 3: option = 160.00*qty;
			break;

			}
			system("cls");
			switch (popt1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<burger_1;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 25 Minutes";
			 cout<<"\nThank you For Ordering From XYZ Fast Food \n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<"  "<<burger_2;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 25 Minutes";
			 cout<<"\nThank you For Ordering From XYZ Pizza\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<burger_3;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 25 Minutes";
			 cout<<"\nThank you For Ordering From XYZ Fast Food\n";
			 break;


			}
			cout<<"\nWould you like to order anything else? Y / N:";
			cin>>gotobeginning;
			if(gotobeginning=='Y' || gotobeginning=='y')
			{
			  goto starting;
			}

 }
}
	else if(option==3)
	 {
		cout<<"\n1  "<<sandwich_1<<" 240.00"<<"\n";
		cout<<"2  "<<sandwich_2<<" 160.00"<<"\n";
		cout<<"3  "<<sandwich_3<<" 100.00"<<"\n";
		cout<<"\nPlease Enter which Sandwich you would like to have?:";
		cin>>popt1;
		if(popt1>=1 && popt1<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>qty;
			switch(popt1)
			{
			case 1: option = 240.00*qty;
			break;

			case 2: option = 160.00*qty;
			break;

			case 3: option = 100.00*qty;
			break;

			}
			system("cls");
			switch (popt1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<sandwich_1;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From XYZ Fast Food\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<"  "<<sandwich_2;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From XYZ Fast Food\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<sandwich_2;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From XYZ Fast Food\n";
			 break;


			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotobeginning;
			if(gotobeginning=='Y' || gotobeginning=='y')
			{
			  goto starting;
			}
			}
			}


	 else if(option==4)
	 {
		cout<<"\n1 "<<drinks1<<" 15.00"<<"\n";
		cout<<"2 "<<drinks2<<" 20.00"<<"\n";
		cout<<"3 "<<drinks3<<" 30.00"<<"\n";
		cout<<"\nPlease enter your choice: ";
		cin>>popt1;
		if(popt1>=1 && popt1<=3)
		{
			cout<<"\nHow Much Drinks Do you want: ";
			cin>>qty;
			switch(popt1)
			{
			case 1: option = 15.00*qty;
			break;

			case 2: option = 20.00*qty;
			break;

			case 3: option = 30.00*qty;
			break;

			}
			system("cls");
			switch (popt1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<drinks1;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order will be delivered shortly";
			 cout<<"\nThank you For Ordering From XYZ Fast Food\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<"  "<<drinks2;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order will be delivered shortly";
			 cout<<"\nThank you For Ordering From XYZ Fast Food\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<drinks3;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order will be delivered shortly";
			 cout<<"\nThank you For Ordering From XYZ Fast Food\n";
			 break;


			}

 }
}
	else if(option==5)
	 {
		cout<<"\n1 "<<fried1<<" 160.00"<<"\n";
		cout<<"2 "<<fried2<<" 220.00"<<"\n";
		cout<<"3 "<<fried3<<" 140.00"<<"\n";
		cout<<"\nPlease Enter which Fried you would like to have?:";
		cin>>popt1;
		if(popt>=1 && popt<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>qty;
			switch(popt1)
			{
			case 1: option = 160.00*qty;
			break;

			case 2: option = 220.00*qty;
			break;

			case 3: option = 140.00*qty;
			break;

			}
			system("cls");
			switch (popt1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<fried1;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From XYZ Fast Food \n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<"  "<<fried2;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From XYZ Fast Food\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<fried3;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From XYZ Fast Food\n";
			 break;


			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotobeginning;
			if(gotobeginning=='Y' || gotobeginning=='y')
			{
			  goto starting;
			}
			}
			}

			else
			{
				system("cls");
				cout<<"Please select the right option : \n";
				cout<<"Would You like to order again? Y / N: " ;
				cin>>gotobeginning;

				if(gotobeginning=='Y' || gotobeginning=='y')
				{
				  goto starting;
			}
			}

     getch();
}
