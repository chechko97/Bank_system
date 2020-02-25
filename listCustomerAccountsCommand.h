#pragma once
#include "command.h"

class ListCustomerAccountsCommand : public Command 
{
public:
	ListCustomerAccountsCommand(Bank* bank);
	void execute() override;
};