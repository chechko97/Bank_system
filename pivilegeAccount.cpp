#include <iostream>
#include "account.h"
#include "pivilegeAccount.h"

using namespace std;

PivilegeAccount::PivilegeAccount(int id, string name, string address, double overdraft, int iban, int ownerId, double amount)
	: overdraft(overdraft), Account(id, name, address, iban, ownerId, amount) {};

double PivilegeAccount::getOverdraft() const
{
	return overdraft;
}

void PivilegeAccount::deposit(double sum)
{
	setBalance(getBalance() + sum);
}

bool PivilegeAccount::withdraw(double sum)
{
	if ((getBalance() + getOverdraft()) < sum)
	{
		return false;
	}
	else
	{
		setBalance(getBalance() - sum);
		return true;
	}
}

void PivilegeAccount::display() const
{
	cout << "Type of account : Privilege Account" << endl;
	cout << "Iban : " << getIban() << endl;
	cout << "Owner ID : " << getOwnerId() << endl;
	cout << "Allowed overdraft : " << getOverdraft() << endl;
	cout << "Balance : " << getBalance() << endl;
}
