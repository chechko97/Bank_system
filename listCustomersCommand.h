#pragma once
#include "command.h"

class ListCustomersCommand : public Command
{
public:
	ListCustomersCommand(Bank* bank);
	void execute() override;
};