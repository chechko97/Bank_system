#include "listCustomersCommand.h"

void ListCustomersCommand::execute()
{
	bank->listCustomers();
}

ListCustomersCommand::ListCustomersCommand(Bank *bank) : Command(bank) {};