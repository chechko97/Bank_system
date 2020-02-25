#pragma once
#include "command.h"

class TransferCommand : public Command 
{
public:
	TransferCommand(Bank* bank);
	void execute() override;
};
