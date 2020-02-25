#include "withdrawFromAccountCommand.h"

using namespace std;

void WithdrawFromAccountCommand::execute()
{
	cout << "Enter iban:\n";
	int iban;
	double money;
	cin >> iban;
	cout << "Enter money to withdraw:\n";
	cin >> money;
	bank->getAccountByIban(iban)->withdraw(money);
}

WithdrawFromAccountCommand::WithdrawFromAccountCommand(Bank *bank) : Command(bank) {};