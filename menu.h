#pragma once
#include <iostream>
#include "listCustomersCommand.h"
#include "addNewCustomerCommand.h"
#include "deleteCustomerCommand.h"
#include "listAllAccountsCommand.h"
#include "listCustomerAccountsCommand.h"
#include "addNewAccountCommand.h"
#include "deleteAccountCommand.h"
#include "withdrawFromAccountCommand.h"
#include "depositToAccountCommand.h"
#include "displayInfoForTheBankCommand.h"
#include "transferCommand.h"

class Menu 
{
protected:
	Bank * bank;
public:
	Menu();
	void start();
	void printCommands();
};
