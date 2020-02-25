#include <iostream>
#include <vector>
#include "account.h"
#include "currentAccount.h"
#include "pivilegeAccount.h"
#include "savingsAccount.h"
#include "bank.h"

using namespace std;

const double INTEREST_RATE = 7;
const double OVERDRAFT = 2000;

Bank::Bank() : name(""), address("") {};

Bank::Bank(string name, string address)
{
	this->name = name;
	this->address = address;
}

string Bank::getName() const
{
	return name;
}

string Bank::getAddress() const
{
	return address;
}

void Bank::addCustomer(int customerId, string name, string address)
{
	for (auto &customer : customers) 
	{
		if (customer.getId() == customerId)
		{
			cout << "Customer already added!\n";
			return;

		}
	}
	customers.push_back(Customer(customerId, name, address));
	cout << "Customer with id " << customerId << " added!\n";
}

void Bank::listCustomers() const
{
	if (customers.empty())
	{
		cout << "List of customers is empty!\n";
	}
	else
	{
		cout << "List of customers:\n";
	}
	for (const auto &customer : customers) 
	{
		customer.display();
	}
}

void Bank::deleteCustomer(int customerId)
{
	for (int i = 0; i < customers.size(); i++)
	{
		if (customers[i].getId() == customerId)
		{
			customers.erase(customers.begin() + i);
			//Po uslovie trqbva da deletenem i vsichki smetki na customer-a
			for (int j = 0; j < accounts.size(); j++)
			{
				if (accounts[j]->getOwnerId() == customers[i].getId()) 
				{
					cout << "Account " << accounts[i]->getId() << " deleted!\n";
					accounts.erase(accounts.begin() + j);
				}
			}
			cout << "Customer with id " << customerId << " deleted!\n";
			return;
		}
	}
	cout << "No customer with this ID" << endl;
}

void Bank::addAccount(string accountType, int iban, int ownerId, double amount)
{
	//ownerId === customerId :)
	for (const auto &account : accounts) 
	{
		if (account->getIban() == iban)
		{
			cout << "Error! Not unique iban!\n" << endl;
			return;
		}

	}
	//Izdirvame customera s tova ID, ako ima takova i si go zapazvame, za da mu vzemem infoto, koeto ni trqbva za kosntructorite otdolu
	bool found = false;
	Customer foundCustomer;
	for (const auto &customer : customers) 
	{
		if (customer.getId() == ownerId) 
		{
			foundCustomer = customer;
			found = true;
		}
	}

	if (found)
	{
		Account *acc;
		if (accountType == "savingsAccount") 
		{
			acc = new SavingsAccount(ownerId, foundCustomer.getName(), foundCustomer.getAddress(), INTEREST_RATE, iban, ownerId, amount);
		}
		else if (accountType == "currentAccount")
		{
			acc = new CurrentAccount(ownerId, foundCustomer.getName(), foundCustomer.getAddress(), iban, ownerId, amount);
		}
		else if (accountType == "privilegeAccount") 
		{
			acc = new PivilegeAccount(ownerId, foundCustomer.getName(), foundCustomer.getAddress(), OVERDRAFT, iban, ownerId, amount);
		}
		else
		{
			cout << "Wrong input!" << endl;
			return;
		}
		accounts.push_back(acc);
		cout << "Account for customer with id " << ownerId << " added!\n";
	}
	else 
	{
		cout << "No customer with that ID!\n";
	}
}

void Bank::deleteAccount(int iban)
{
	for (int i = 0; i < accounts.size(); i++)
	{
		if (accounts[i]->getIban() == iban)
		{
			accounts.erase(accounts.begin() + i);
			cout << "Account with IBAN " << iban << " deleted!\n";
			return;
		}
	}
	cout << "No account with this IBAN" << endl;
}

void Bank::listAccounts() const
{
	cout << "List of accounts:\n";
	for (Account* acc : accounts)
	{
		acc->display();
	}
}

void Bank::listCustomerAccount(int customerId) const
{
	cout << "List of accounts for customer with id " << customerId << ":\n";
	for (const auto& acc : accounts)
	{
		if (acc->getId() == customerId)
		{
			acc->display();
		}
	}
}

void Bank::transfer(int fromIBAN, int toIBAN, double amount)
{
	Account *from = nullptr, *to = nullptr;
	for (const auto& acc : accounts)
	{
		if (acc->getIban() == fromIBAN)
		{
			from = acc;
		}
		if (acc->getIban() == toIBAN)
		{
			to = acc;
		}
	}
	if (!from || !to)
	{
		cout << "Wrong fromIBAN or toIBAN" << endl;
		return;
	}
	from->withdraw(amount);
	to->deposit(amount);
	cout << "Transaction successful!\n";
}

void Bank::display() const
{
	cout << "Name : " << getName() << endl;
	cout << "Address : " << getAddress() << endl;
	cout << "Number of customers : " << customers.size() << endl;
	cout << "Number of accounts : " << accounts.size() << endl;
}

Account *Bank::getAccountByIban(int iban) const
{
	for (const auto& acc : accounts)
	{
		if (acc->getIban() == iban)
		{
			return acc;
		}
	}
	return nullptr;
}

