#include "menu.h"

using namespace std;

void Menu::start()
{
	int input;
	while (true) 
	{
		printCommands();
		cin >> input;
		Command* command = nullptr;
		switch (input) 
		{
		case 1:
			command = new ListCustomersCommand(bank);
			break;
		case 2:
			command = new AddNewCustomerCommand(bank);
			break;
		case 3:
			command = new DeleteCustomerCommand(bank);
			break;
		case 4:
			command = new ListAllAccountsCommand(bank);
			break;
		case 5:
			command = new ListCustomerAccountsCommand(bank);
			break;
		case 6:
			command = new AddNewAccountCommand(bank);
			break;
		case 7:
			command = new DeleteAccountCommand(bank);
			break;
		case 8:
			command = new WithdrawFromAccountCommand(bank);
			break;
		case 9:
			command = new DepositToAccountCommand(bank);
			break;
		case 10:
			command = new TransferCommand(bank);
			break;
		case 11:
			command = new DisplayInfoForTheBankCommand(bank);
			break;
		case 12:
			cout << "Good bye :)\n";
			return;
		}
		if (command)
		{
			command->execute();
		}
		else 
		{
			cout << "Wrong input!\n";
		}
	}
}


void Menu::printCommands() 
{
	cout << "1     List customers\n"
		"2     Add new customer\n"
		"3     Delete customer\n"
		"4     List all accounts\n"
		"5     List customer accounts\n"
		"6     Add new account\n"
		"7     Delete account\n"
		"8     Withdraw from account\n"
		"9     Deposit to account\n"
		"10    Transfer\n"
		"11    Display info for the bank\n"
		"12    Quit\n";
}

Menu::Menu() 
{
	bank = new Bank;
}
