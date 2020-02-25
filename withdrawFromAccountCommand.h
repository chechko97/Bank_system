#pragma once
#include "command.h"

class WithdrawFromAccountCommand : public Command 
{
public:
	WithdrawFromAccountCommand(Bank* bank);
	void execute() override;
};