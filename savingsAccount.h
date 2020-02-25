#pragma once
#include "account.h"

class SavingsAccount : public Account
{
private:
	double interestRate;
public:
	SavingsAccount(int id, string name, string address, double interestRate, int iban, int ownerId, double amount);
	double getInterestRate() const;
	void deposit(double sum) override;
	bool withdraw(double sum) override;
	void display() const override;

};