#pragma once
#include "command.h"

class DisplayInfoForTheBankCommand : public Command 
{
public:
	DisplayInfoForTheBankCommand(Bank* bank);
	void execute() override;
};
