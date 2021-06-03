#include <iostream>
#include <string>
#define SIZE 100
using namespace std;
class BankAccount
{
private:
	string name;
	unsigned long accountNumber;
	string accountType;
	double balance;
public:
	BankAccount(string n = "NULL", unsigned long aN = 0, string aT = "NULL", double b = 0.0);
	void Deposit(double);
	void Withdraw(double);
	void Display();
	void operator<(BankAccount);

};

void CreateAccount(BankAccount aArr[], unsigned long nArr[], int& index);