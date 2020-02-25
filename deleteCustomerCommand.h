#pragma once
#include "command.h"

class DeleteCustomerCommand : public Command 
{
public:
	DeleteCustomerCommand(Bank* bank);
	void execute() override;
};