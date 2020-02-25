#pragma once
#include "account.h"

class PivilegeAccount : public Account
{
private:
	double overdraft;
public:
	PivilegeAccount(int id, string name, string address, double overdraft, int iban, int ownerId, double amount);
	double getOverdraft() const;
	void deposit(double sum) override;
	bool withdraw(double sum) override;
	void display() const override;

};