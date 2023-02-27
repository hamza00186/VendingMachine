#include<iostream>

using namespace std;
int coldDrinks();
int biscuits();
int sandwitches();


int main()
{  
	system("color 3F");
	int choice;

	char a;
	char name[20];
	cout<<endl;
	cout<<endl;
	cout<<"\t\t\t\t\t\t;*****************************************************************;"<<endl;
	cout<<"\t\t\t\t\t\t|             Welcome to 'E mart' Vending Machine !               |" << endl;
	cout<<"\t\t\t\t\t\t*******************************************************************"<<endl;
	cout<<endl;
	cout<<"\t\t\t\t\t\tEnter the Customer Name ";
	cin.getline(name,20);

	system("cls");
at:
	cout<<"\n\t\t\t\t\t\t\t\t\t :)Hello "<<name<<":)"; 
	cout << "\n\t\t\t\tPress 1 for Cold Drinks :\n";
	cout << "\n\t\t\t\tPress 2 for Biscuit :\n";
	cout << "\n\t\t\t\tPress 3 for Sandwitches :\n";
	cout<<"\n\t\t\t\t";
	cin >> choice;
	if (choice == 1)
	{
		coldDrinks();


		
		cout << "\nDo you want to Shop more ? if yes Press 'Y' Otherwise 'N'  :  \n";
		cin >> a;
		if (a == 'Y' || a == 'y')
		{
			system("cls");
			goto at;
		}
		else if (a == 'N' || a == 'n')
		{

			exit(0);
		}
		else

		{
			cout << "Wrong Input " << endl;
			system("pause");
			exit(0);
		}

	}

	else if (choice == 2)
	{
		biscuits();
		
		cout << "\nDo you want to Shop more ? if yes press 'Y' Otherwise 'N'  :  \n";
		cin >> a;
		if (a == 'Y' || a == 'y')
		{
			system("cls");
			goto at;
		}
		else if (a == 'N' || a == 'n')
		{

			exit(0);
		}
		else

		{
			cout << "Wrong Input " << endl;
			system("pause");
			exit(0);
		}


	}

	else if (choice == 3)
	{
		sandwitches();
		
		cout << "\nDo you want to Shop more ? if yes press 'Y' Otherwise 'N'  :  \n";
		cin >> a;
		if (a == 'Y' || a == 'y')
		{
			system("cls");
			goto at;
		}
		else if (a == 'N' || a == 'n')
		{

			exit(0);
		}
		else

		{
			cout << "Wrong Input " << endl;

			system("pause");
			exit(0);
		}
	}
return 0;
}



int coldDrinks()

{
	int money;
	char drinkflavor = ' ', drinksize = ' ';
ag:
	system("cls");
	cout << "\n\t\t\t\tPress 'F' for Fanta   :  \n" << endl;
	cout << "\t\t\t\tPress 'P' for Pepsi   :  \n" << endl;
	cout << "\t\t\t\tPress 'C' for Coke    :  \n" << endl;
	cout << "\t\t\t\tPress 'S' for Sprite  :  \n" << endl;
	cout << "\t\t\t\tPress 'U' for 7up     :    " << endl;
	cout<<"\n\t\t\t\t";
	cin >> drinkflavor;

	if (drinkflavor != 'f' && drinkflavor != 'F' && drinkflavor != 'P' && drinkflavor != 'p' && drinkflavor != 'C' && drinkflavor != 'c' && drinkflavor != 'S' && drinkflavor != 's' && drinkflavor != 'U' && drinkflavor != 'u')
	{
		cout << "Invalid Input. Try Again... " << endl;
		system("pause");
		goto ag;


	}
	cout << endl;



	cout << endl << endl;
	system("cls");

	cout << "\n\t\t\t\tPrice of Reguler          : 25   \n" << endl;
	cout << "\t\t\t\tPrice of Half liter       : 35   \n" << endl;
	cout << "\t\t\t\tPrice of Liter            : 55   " << endl;

	cout << endl << endl;



	cout << "\n\t\t\t\tEnter the size of Bottels :" << endl << endl;

	cout << "\t\t\t\tPress 'R' for Reguler     :\n" << endl;
	cout << "\t\t\t\tPress 'H' for Half liter  :\n" << endl;
	cout << "\t\t\t\tPress 'L' for Liter       :" << endl;
	cout<<"\n\t\t\t\t";


	cin >> drinksize;


	if (drinksize == 'r' || drinksize == 'R')
	{


		cout << "\n\t\t\t\tEnter the Money " << endl;
		cout<<"\n\t\t\t\t";
		cin >> money;
		if (money < 25)
		{
			cout << "\n\t\t\t\tInviald Money" << endl;
		}
		else
		{

			money = money - 25;

			cout << "\n\t\t\t\tRemaing Money " << money << endl;
			cout<<"\n\t\t\t\tThanks for Shopping :) \n";
			}
	}

	else if (drinksize == 'h' || drinksize == 'H')
	{
		

		cout << "\n\t\t\t\tEnter the Money " << endl;
		cout<<"\n\t\t\t\t";
		cin >> money;
		if (money < 35)
		{
			cout << "\n\t\t\t\t\t\tInviald Money" << endl;
		}
		else
		{

			money = money - 35;
			cout << "\n\t\t\t\tRemaing Money " << money << endl;
			cout<<"\n\t\t\t\tThanks for Shopping :) \n";
		}
	}

	else if (drinksize == 'l' || drinksize == 'L')
	{
		
	
		cout << "\n\t\t\t\tEnter the Money " << endl;
		cout<<"\n\t\t\t\t";
		cin >> money;
		if (money < 55)
		{
			cout << "\n\t\t\t\t\t\tInviald Money" << endl;
		}
		else
		{
			
			money = money - 55;
			cout << "\n\t\t\t\tRemaing Money " << money << endl;
			cout<<"\n\t\t\t\tThanks for Shopping :) \n";
		}
	}
	else
	{
		cout << "           Invalid input!!              " << endl << endl;
}



	return money;

}

int biscuits()
{
hh:
	system("cls");
	int money;
	char biscuitsize = ' ', biscuitsflavor = ' ';
	cout << "\n\t\t\t\t\tPress 'R' for Rio \n" << endl;
	cout << "\t\t\t\t\tPress 'P' for Prince \n" << endl;
	cout << "\t\t\t\t\tPress 'S' for Sooper\n" << endl;
	cout << "\t\t\t\t\tPress 'C' for Chocolate Chips\n" << endl;
	cout << "\t\t\t\t\tPress 'N' for Nan Khatai" << endl;
	cout<<"\n\t\t\t\t\t";

	cin >> biscuitsflavor;

	if (biscuitsflavor != 'r' && biscuitsflavor != 'R' && biscuitsflavor != 'p' &&biscuitsflavor != 'P' && biscuitsflavor != 's' && biscuitsflavor != 'S' && biscuitsflavor != 'c' && biscuitsflavor != 'C'&& biscuitsflavor != 'n' && biscuitsflavor != 'N')
	{
		{
			cout << "\n\t\t\t\t\tInvalid input .Try Again " << endl;
			system("pause");
			goto hh;


		}
	}
	cout << endl;


	cout << endl << endl;
	system("cls");
	cout << "\n\t\t\t\t\tEnter the size of Biscutis\n" << endl;
	cout << "\t\t\t\t\tPress 'S' for Small (Price=5)\n" << endl;
	cout << "\t\t\t\t\tPress 'M' for Medium (Price=10) \n" << endl;
	cout << "\t\t\t\t\tPress 'L' for Large (Price=15)\n" << endl;
	cout<<"\t\t\t\t\t";
	
	cin >> biscuitsize;

	if (biscuitsize == 's' || biscuitsize == 'S')
	{
		
		
		cout << "\n\t\t\t\t\tEnter the Money" << endl;
		cout<<"\n\t\t\t\t\t";
		cin >> money;
		if (money < 5)
		{
			cout << "\n\t\t\t\t\tInviald Money" << endl;
		}
		else
		{
		
			money = money - 5;
			cout << "\n\t\t\t\t\tRemaing Money " << money << endl;
			cout<<"\n\t\t\t\t\tThanks for Shopping :) \n";
		}
	}

	else if (biscuitsize == 'm' || biscuitsize == 'M')
	{


		cout << "\n\t\t\t\t\tEnter the Money " << endl;
		cout<<"\n\t\t\t\t\t";
		cin >> money;
		if (money < 10)
		{
			cout << "\n\t\t\t\t\tInviald Money" << endl;
		}
		else
		{
	
			money = money - 10;
			cout << "\n\t\t\t\t\tRemaing Money " << money << endl;
			cout<<"\n\t\t\t\t\tThanks for Shopping :) \n";
		}
	}

	else if (biscuitsize == 'l' || biscuitsize == 'L')
	{
	
		
		cout << "\n\t\t\t\t\tEnter the Money " << endl;
		cout<<"\n\t\t\t\t\t";
		cin >> money;
		if (money < 15)
		{
			cout << "\n\t\t\t\t\tInviald Money" << endl;
		}
		else
		{
		
			money = money - 15;
			cout << "\n\t\t\t\t\tRemaing Money " << money << endl;
			cout<<"\n\t\t\t\t\tThanks for Shopping :) \n";
		}
	}
	else
	{
		cout << "           Invalid input!!              " << endl << endl;
	}
return money;
}  

int sandwitches()
{
	system("cls");
	int a, money;
	cout << "\n\t\t\t\t\tPress 1 for Club Sandwitche (Price=50)  \n" << endl;
	cout << "\t\t\t\t\tPress 2 for Chicken Sandwitche (Price=60)" << endl;
	cout<<"\n\t\t\t\t\t";
	cin >> a;
	if (a == 1)
	{
		
		
		cout << "\n\t\t\t\t\tEnter the Money " << endl;
		cout<<"\n\t\t\t\t\t";
		cin >> money;
		if (money < 50)
		{
			cout << "\n\t\t\t\t\tInviald Money" << endl;
		}
		else
		{
			
			money = money - 50;
		cout << "\n\t\t\t\t\tRemaing Money " << money << endl;
		cout<<"\n\t\t\t\t\tThanks for Shopping :) \n";
		}
		
	}
	else if (a == 2)
	{
		
		
		cout << "\n\t\t\t\t\tEnter the Money " << endl;
		cout<<"\n\t\t\t\t\t";
		cin >> money;
		if (money < 60)
		{
			cout << "\n\t\t\t\t\tInviald Money" << endl;
		}
		else
		{
			
			money = money - 60;
			cout << "\n\t\t\t\t\tRemaing Money " << money << endl;
			cout<<"\n\t\t\t\t\tThanks for Shopping :) \n";
		}
	}
	else
	{
		cout << "\n\t\t\t\t\tInvild Input" << endl;
	}
	return money;
}




