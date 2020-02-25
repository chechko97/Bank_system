#pragma once
#include "command.h"

class DepositToAccountCommand : public Command
{
public:
	DepositToAccountCommand(Bank* bank);
	void execute() override;
};
