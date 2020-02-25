#include "addNewAccountCommand.h"

using namespace std;

void AddNewAccountCommand::execute()
{
	string accountType;
	int iban;
	int ownerId;
	double amount;
	cout << "Enter account type[savingsAccount/privilegeAccount/currentAccount], iban, ownerId, amount:\n";
	cin >> accountType >> iban >> ownerId >> amount;
	bank->addAccount(accountType, iban, ownerId, amount);
}

AddNewAccountCommand::AddNewAccountCommand(Bank *bank) : Command(bank) {};
