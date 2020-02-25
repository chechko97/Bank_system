#pragma once
#include "bank.h"

class Command 
{
protected:
	Bank * bank;
public:
	Command(Bank* bank);
	virtual void execute() = 0;

};