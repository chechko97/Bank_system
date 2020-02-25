#include "deleteAccountCommand.h"

using namespace std;

void DeleteAccountCommand::execute() 
{
	cout << "Enter iban:\n";
	int iban;
	cin >> iban;
	bank->deleteAccount(iban);
}

DeleteAccountCommand::DeleteAccountCommand(Bank *bank) : Command(bank) {};