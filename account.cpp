#include<iostream>
#include "customer.h"
#include "account.h"

using namespace std;

Account::Account() : iban(0), ownerId(0), amount(0) {};

Account::Account(int id, string name, string address, int iban, int ownerId, double amount) : Customer(id, name, address)
{
	this->iban = iban;
	this->ownerId = ownerId;
	this->amount = amount;
}

double Account::getBalance() const
{
	return amount;
}

double Account::setBalance(double amount)
{
	return this->amount = amount;
}

int Account::getIban() const
{
	return iban;
}

int Account::getOwnerId() const
{
	return ownerId;
}
