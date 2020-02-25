#pragma once
#include "command.h"

class DeleteAccountCommand : public Command 
{
public:
	DeleteAccountCommand(Bank* bank);
	void execute() override;
};