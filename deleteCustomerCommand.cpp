#include "deleteCustomerCommand.h"

using namespace std;

void DeleteCustomerCommand::execute() 
{
	cout << "Enter customerId:\n";
	int id;
	cin >> id;
	bank->deleteCustomer(id);
}

DeleteCustomerCommand::DeleteCustomerCommand(Bank *bank) : Command(bank) {};
