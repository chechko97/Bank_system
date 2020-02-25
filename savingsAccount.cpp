#include <iostream>
#include "account.h"
#include "savingsAccount.h"

using namespace std;


SavingsAccount::SavingsAccount(int id, string name, string address, double interestRate, int iban, int ownerId, double amount)
	: interestRate(interestRate), Account(id, name, address, iban, ownerId, amount) {};

double SavingsAccount::getInterestRate() const
{
	return interestRate;
}

void SavingsAccount::deposit(double sum)
{
	setBalance(getBalance() + sum);
}

bool SavingsAccount::withdraw(double sum)
{
	if (getBalance() < sum)
	{
		return false;
	}
	else
	{
		setBalance(getBalance() - sum);
		return true;
	}
}

void SavingsAccount::display() const
{
	cout << "Type of account : Savings Account" << endl;
	cout << "Iban : " << getIban() << endl;
	cout << "Owner ID : " << getOwnerId() << endl;
	cout << "Yearly Interest rate : " << getInterestRate() << endl;
	cout << "Balance : " << getBalance() << endl;
}
