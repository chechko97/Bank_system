#include "depositToAccountCommand.h"

using namespace std;

void DepositToAccountCommand::execute() 
{
	cout << "Enter iban:\n";
	int iban;
	double money;
	cin >> iban;
	cout << "Enter money to deposit:\n";
	cin >> money;
	bank->getAccountByIban(iban)->deposit(money);
}

DepositToAccountCommand::DepositToAccountCommand(Bank *bank) : Command(bank) {};
