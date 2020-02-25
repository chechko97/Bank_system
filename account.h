#pragma once
#include "customer.h"

class Account : public Customer
{
private:
	int iban;
	int ownerId;
	double amount;
public:
	Account();
	Account(int id, string name, string address, int iban, int ownerId, double amount);
	virtual void deposit(double sum) = 0;
	virtual bool withdraw(double sum) = 0;
	virtual void display() const = 0;
	double getBalance() const;
	double setBalance(double amount);
	int getIban() const;
	int getOwnerId() const;

};