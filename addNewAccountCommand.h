#pragma once
#include "command.h"

class AddNewAccountCommand : public Command 
{
public:
	AddNewAccountCommand(Bank* bank);
	void execute() override;
};

