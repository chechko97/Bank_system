#include <iostream>
#include "addNewCustomerCommand.h"

using namespace std;

void AddNewCustomerCommand::execute() 
{
	int customerId;
	string name;
	string address;
	cout << "Enter customerId, name and address:\n";
	cin >> customerId;
	cin.ignore();
	getline(cin, name);
	getline(cin, address);
	bank->addCustomer(customerId, name, address);
}

AddNewCustomerCommand::AddNewCustomerCommand(Bank *bank) : Command(bank) {};