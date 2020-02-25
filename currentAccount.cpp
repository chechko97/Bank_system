#include <iostream>
#include "account.h"
#include "currentAccount.h"

using namespace std;

CurrentAccount::CurrentAccount(int id, string name, string address, int iban, int ownerId, double amount) : Account(id, name, address, iban, ownerId, amount) {};

void CurrentAccount::deposit(double sum)
{
	setBalance(getBalance() + sum);
}

bool CurrentAccount::withdraw(double sum)
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

void CurrentAccount::display() const
{
	cout << "Type of account : Current Account" << endl;
	cout << "Iban : " << getIban() << endl;
	cout << "Owner ID : " << getOwnerId() << endl;
	cout << "Balance : " << getBalance() << endl;
}
