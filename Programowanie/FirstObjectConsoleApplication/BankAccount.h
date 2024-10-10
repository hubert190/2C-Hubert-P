#pragma once
#include <iostream>

class BankAccount
{
public:
	double balance;
	st d::string owner;
	std::string currency;

	void AccountInformation();

	void DepositToAccount(double amount);


	bool WidthdrawalFromAccount(double amount);

	void TransferBetweenAccounts(BankAccount& targetAccount , );
};
