#include <iostream>
#include "BankAccount.h"

void BankAccount.h::AccountInformation()
{
	std::cout << "Informacja o koncie bankowym\n";
	std::cout << "W³aœciciel: " << owner << "\n";
	std::cout << "Saldo: " << balance << " " << currency << "\n";
}

void BankAccount.h::DepositToAccount(double amount)
{
	if (amount >= 0)
		balance = balance + amount;
}

if (amount >= 0
	&& balance >= amount)
{
	balance = balance - amount;
	return true;
}

return false;
	