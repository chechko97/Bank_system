#pragma once
#include "command.h"

class AddNewCustomerCommand : public Command 
{
public:
	AddNewCustomerCommand(Bank* bank);
	void execute() override;
};
