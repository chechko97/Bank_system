#include "listCustomerAccountsCommand.h"

using namespace std;

void ListCustomerAccountsCommand::execute() 
{
	cout << "Enter customerId:\n";
	int id;
	cin >> id;
	bank->listCustomerAccount(id);
}

ListCustomerAccountsCommand::ListCustomerAccountsCommand(Bank *bank) : Command(bank) {};
