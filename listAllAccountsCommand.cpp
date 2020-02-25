#include "listAllAccountsCommand.h"

void ListAllAccountsCommand::execute() 
{
	bank->listAccounts();
}

ListAllAccountsCommand::ListAllAccountsCommand(Bank *bank) : Command(bank) {};