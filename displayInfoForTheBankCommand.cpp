#include "displayInfoForTheBankCommand.h"

void DisplayInfoForTheBankCommand::execute() 
{
	bank->display();
}

DisplayInfoForTheBankCommand::DisplayInfoForTheBankCommand(Bank *bank) : Command(bank) {};