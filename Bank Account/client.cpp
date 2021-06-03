#include "bank_account.h"

int main()
{
	char option;
	BankAccount aArr[SIZE];
	unsigned long nArr[SIZE] = { 0 };
	int index = 0;
	while (1)
	{
		bool aF = false;
		int tIndex;
		int tAmount;
		unsigned long aN;
		cout << "Select an option: a - Create, b - Deposit, c - Withdraw, d - Transfer Balance, e - Display f - Exit: "; cin >> option;

		if (option == 'a')
		{
			CreateAccount(aArr, nArr, index);
		}
		else if (option == 'b')
		{
			while (!aF)
			{
				cout << "Enter Account Number: "; cin >> aN;

				for (int i = 0; i < SIZE; i++)
				{
					if (nArr[i] == aN)
					{
						tIndex = i;
						aF = true;
						break;
					}
				}
				if (aF == false)
					cout << "Account not found!\n";
			}
			cout << "Amount: "; cin >> tAmount;
			aArr[tIndex].Deposit(tAmount);
		}
		else if (option == 'c')
		{
			while (!aF)
			{
				cout << "Enter Account Number: "; cin >> aN;

				for (int i = 0; i < SIZE; i++)
				{
					if (nArr[i] == aN)
					{
						tIndex = i;
						aF = true;
						break;
					}
				}
				if (aF == false)
					cout << "Account not found!\n";
			}
			cout << "Amount: "; cin >> tAmount;
			aArr[tIndex].Withdraw(tAmount);
		}
		else if (option == 'd')
		{

			while (!aF)
			{
				cout << "Enter Account 1 number: "; cin >> aN;

				for (int i = 0; i < SIZE; i++)
				{
					if (nArr[i] == aN)
					{
						tIndex = i;
						aF = true;
						break;
					}
				}
				if (aF == false)
					cout << "Account not found!\n";
			}
			BankAccount o1 = aArr[tIndex];
			aF = false;
			while (!aF)
			{
				cout << "Enter Account 2 number: "; cin >> aN;

				for (int i = 0; i < SIZE; i++)
				{
					if (nArr[i] == aN)
					{
						tIndex = i;
						aF = true;
						break;
					}
				}
				if (aF == false)
					cout << "Account not found!\n";
			}
			BankAccount o2 = aArr[tIndex];
			o1 < o2;
		}
		else if (option == 'e')
		{
			while (!aF)
			{
				cout << "Enter Account Number to Disply: "; cin >> aN;
				for (int i = 0; i < SIZE; i++)
				{
					if (nArr[i] == aN)
					{
						tIndex = i;
						aF = true;
						break;
					}
				}
				if (aF == false)
					cout << "Account not found!\n";
			}
			aArr[tIndex].Display();
		}
		else if (option == 'f')
			break;
		else
			cout << "Invalid Input!\n";

	}
}