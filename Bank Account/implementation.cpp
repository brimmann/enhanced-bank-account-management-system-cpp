#include "bank_account.h"


///////////////////////

BankAccount::BankAccount(string n , unsigned long aN , string aT, double b)
{
	name = n;
	accountNumber = aN;
	accountType = aT;
	balance = b;
}
/////////////////

void BankAccount::Deposit(double amount)
{
	balance += amount;
	cout << "$" << amount << " deposited!\n";
}

void BankAccount::Withdraw(double amount)
{
	balance -= amount;
	cout << "$" << amount << " withdrew!\n";
}

///////////
void BankAccount::Display()
{
	cout << "Bank Account:\n";
	cout << "Name: " << name << endl;
	cout << "Account Number: " << accountNumber << endl;
	cout << "Balance: $" << balance << endl << endl << "------------------------------------------------------" << endl;
}

///////////////

void BankAccount::operator<(BankAccount obj)
{
	balance += obj.balance;
	cout << "A1's balance moved to A2\n";
}


////////////////////////////////////

void CreateAccount(BankAccount aArr[], unsigned long nArr[], int &index)
{
	cin.ignore();
	string n;
	unsigned long aN = 123050000 + index;
	string aT;
	double b;
	cout << "Enter Name: "; getline(cin, n);
	cout << "Enter Account Type: "; getline(cin, aT);
	cout << "Enter Initial Amount: "; cin >> b;
	BankAccount temp(n, aN, aT, b);
	aArr[index] = temp;
	nArr[index] = aN;
	cout << "Account created with the following informations: \n";
	aArr[index].Display();
	index++;
}

