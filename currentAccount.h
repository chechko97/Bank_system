#pragma once
#include "account.h"

class CurrentAccount : public Account
{
public:
	CurrentAccount(int id, string name, string address, int iban, int ownerId, double amount);
	void deposit(double sum) override;
	bool withdraw(double sum) override;
	void display() const override;

};