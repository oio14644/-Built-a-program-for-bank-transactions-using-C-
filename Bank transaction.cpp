•	Built a program for bank transactions using C++
	Created methods to select the account types to be transacted
	Created methods to deposit, withdraw and transfer moneys
	This program works successfully to simulate a bank transaction

// This program to simulate a bank transaction.There are two bank accounts : check -
// ing and Saving.First, ask for the initial balances of the bank accounts; reject negative
// balances.Then ask for the transactions; options are deposit, withdrawal, and trans -
// fer.Then ask for the account; options are Checking and Saving.Then ask for the
// amount; reject transactions that overdraw an account.At the end, print the balances
// of both accounts.

#include "stdafx.h";
#include<iostream>;
using namespace std;

// function prototypes
double inputAmount();
void initialBalance(double &account);
void depositMoney(double &account);
void withdrawMoney(double &account);
void transferMoney(double &account1, double &account2);

void main()
{
	cout << "Initial balance of the Checking account: $";
	double dChecking;
	initialBalance(dChecking);
	cout << "Initial balance of the Saving account: $";
	double dSaving;
	initialBalance(dSaving);

	cout << "Choose a transaction type. 1) Deposit, 2) Withdrawal, 3) Transfer: ";
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		cout << "To which account? 1) Checking, 2) Saving: ";
		int choice1;
		cin >> choice1;

		if (choice1 == 1)
		{
			depositMoney(dChecking);
		}

		else if (choice1 == 2)
		{
			depositMoney(dSaving);
		}

		else
		{
			cout << "Invalid choice\n";
		}
		break;
	}
	case 2:
	{
		cout << "From which account? 1) Checking, 2) Saving: ";
		int choice2;
		cin >> choice2;

		if (choice2 == 1)
		{
			withdrawMoney(dChecking);
		}

		else if (choice2 == 2)
		{
			withdrawMoney(dSaving);
		}

		else
		{
			cout << "Invalid choice\n";
		}
		break;
	}
	case 3:
	{
		cout << "From which account? 1) Checking, 2) Saving: ";
		int choice3;
		cin >> choice3;

		if (choice3 == 1)
		{
			transferMoney(dChecking, dSaving);
		}

		else if (choice3 == 2)
		{
			transferMoney(dSaving, dChecking);
		}

		else
		{
			cout << "Invalid choice\n";
		}
		break;
	}
	default:
		cout << "Invalid choice.\n";
	}
	cout << "Balance of Checking account: $" << dChecking << "\n";
	cout << "Balance of Saving account: $" << dSaving << "\n";
}
// The amount of money input from keyboard
double inputAmount()
{
	double amount;
	do
	{
	  cin >> amount;
	} while (amount < 0);
	return amount;
}
// Initial balance in checking or saving accounts
void initialBalance(double &account)
{
	account = inputAmount();
}

// Deposit money into checking or saving accounts
void depositMoney(double &account)
{
	cout << "How much?(should be >= 0): $";
	account += inputAmount();
}

// Withdraw money from checking or saving accounts
void withdrawMoney(double &account)
{
	cout << "How much?(should be >= 0): $";
	double amount = inputAmount();
	if (amount > account)
	{
		cout << "Don't have enough money in the account!\n";
		return;
	}
	else
	{
		account -= amount;
	}
}

// Transfer money between checking and saving accounts
void transferMoney(double &account1,double &account2)
{
	cout << "How much?(should be >= 0): $";
	double amount = inputAmount();
	if (amount > account1)
	{
		cout << "Don't have enough money in the account!\n";
		return;
	}
	else
	{
		account1 -= amount;
		account2 += amount;
	}
}

