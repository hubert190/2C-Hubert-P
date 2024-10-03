#include <iostream>

struct BankAccount
{
	double balance;
	std::string owner;
	std::string currency;
};

void accountInformation(BankAccount& account)
{
	std::cout << "Informacje o koncie bankowym \n";
	std::cout << "W³aœcicel: " << account.owner << "\n";
	std::cout << "Saldo: " << account.balance << " " << account.currency << '\n';
}

void depositToAccount(BankAccount& account, double amount)
{
	if (amount >= 0)
		account.balance = account.balance + amount;
}

void widthrawalFromAccount(BankAccount& account, double amount)
{
	if (amount >= 0
		&& account.balance >= amount)
		account.balance = account.balance - amount;
}

bool widthdrawalFromAccounts(BankAccount& account, double amount)
{
	if(amount>=0
		&& account.balance>=amount)
	{
		account.balance = account.balance - amount;
		return true;
	}
	return false;
}

void transferBetweenAccounts(BankAccount &sourceAccount, BankAccount &targetAccount, double amount)
{
	if (widthdrawalFromAccounts(sourceAccount, amount))
		depositToAccount(targetAccount, amount);

}

void task4()
{
	BankAccount firstAccount;
	firstAccount.balance = 7200;
	firstAccount.owner = "Jan Kowalski";
	firstAccount.currency = "z³";

	accountInformation(firstAccount);

	BankAccount secondAccount;
	secondAccount.balance = 3200;
	secondAccount.owner = "Ewa Nowak";
	secondAccount.currency = "z³";
	depositToAccount(secondAccount, 100);
	accountInformation(secondAccount);
}