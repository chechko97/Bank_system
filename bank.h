#pragma once
#include "customer.h"
#include "account.h"
#include <vector>
#include <string>

using namespace std;

class Bank
{
private:
	string name;
	string address;
	vector<Customer> customers;
	vector<Account*> accounts;
public:
	Bank();
	Bank(string name, string address);
	string getName() const;
	string getAddress() const;
	void addCustomer(int customerId, string name, string address);
	void listCustomers() const;
	void deleteCustomer(int customerId);
	void addAccount(string accountType, int iban, int ownerId, double amount);
	void deleteAccount(int iban);
	void listAccounts() const;
	Account* getAccountByIban(int iban) const;
	void listCustomerAccount(int customerId) const;
	void transfer(int fromIBAN, int toIBAN, double amount);
	void display() const;

};