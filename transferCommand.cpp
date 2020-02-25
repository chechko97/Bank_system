#include "transferCommand.h"

using namespace std;

void TransferCommand::execute() 
{
	int from, to;
	double money;
	cout << "Enter fromIban:\n";
	cin >> from;
	cout << "Enter toIban:\n";
	cin >> to;
	cout << "Enter money to transfer:\n";
	cin >> money;
	bank->transfer(from, to, money);
}

TransferCommand::TransferCommand(Bank *bank) : Command(bank) {};