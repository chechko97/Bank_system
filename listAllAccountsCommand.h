#pragma once
#include "command.h"

class ListAllAccountsCommand : public Command
{
public:
	ListAllAccountsCommand(Bank* bank);
	void execute() override;
};

