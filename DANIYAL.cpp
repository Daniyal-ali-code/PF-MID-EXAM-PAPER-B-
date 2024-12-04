#include <iostream>
using namespace std;
int main(){
	
	int choice, income, expense, balance = 0;
	
	do{
		cout << "\nPRESS 1 TO ADD INCOME" << endl;
		cout << "PRESS 2 TO ADD EXPENSE" << endl;
		cout << "PRESS 3 TO VIEW BALANCE" << endl;
		cout << "PRESS 4 TO EXIT THE PROGRAM" << endl;		
		cout << "ENTER YOUR CHOICE: ";
		cin >> choice;
		
		switch (choice){
			case 1:{
				cout << "\nENTER YOUR INCOME: ";
				cin >> income;
				if (income <= 0){
					cout << "PLEASE ENTER A VALID AMOUNT." << endl;
					continue;
				}
				balance += income;
				break;
			}
			case 2:{
				cout << "\nENTER YOUR EXPENSES: ";
				cin >> expense;
				if (expense <= 0){
					cout << "PLEASE ENTER A VALID AMOUNT." << endl;
					continue;
				}
				balance -= expense;
				if (balance < 0){
					cout << "INSUFFICIENT BALANCE." << endl;
				break;
				}			
			}
			case 3:{
				cout << balance;
				break;
			}
			case 4:{
				break;
			}
		}
	} while (choice != 4);
	
	
return 0;	
}