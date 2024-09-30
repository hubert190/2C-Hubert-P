#include <iostream>

struct bankAccount
{
	double balance;
	std::string owner;
	std::string currency;
};

void accountInformation(bankAccount& account)
{
	std::cout << "Informacje o koncie bankowym \n";
	std::cout << "W³aœcicel: " << account.owner << "\n";
	std::cout << "Saldo: " << account.balance << " " << account.currency << '\n';
}

void depositToAccount(bankAccount& account, double amount)
{
	if (amount >= 0)
		account.balance = account.balance + amount;
}

void widthdrawalFromAccount(bankAccount& account, double amount)
{
	if (amount >= 0
		&& account.balance >= amount)
		account.balance = account.balance - amount;
}

bool widthdrawalFromAccounts (bankAccount&)

void task4()
{
	bankAccount firstAccount;
	firstAccount.balance = 7200;
	firstAccount.owner = "Jan Kowalski";
	firstAccount.currency = "z³";

	accountInformation(firstAccount);

	bankAccount secondAccount;
	secondAccount.balance = 3200;
	secondAccount.owner = "Ewa Nowak";
	secondAccount.currency = "z³";
	depositToAccount(secondAccount, 100);
	accountInformation(secondAccount);
}