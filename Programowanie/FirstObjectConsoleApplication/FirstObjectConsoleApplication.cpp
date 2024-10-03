#include <iostream>

class BankAccount
{
	public:
	double balance;
	std::string owner;
	std::string currency;
	void AccountInformation()
	{
		std::cout << "Informacje o koncie bankowym \n";
		std::cout << "W³aœcicel: " << owner << "\n";
		std::cout << "Saldo: " << balance << " " << currency << '\n';
	}
};

void accountInformation(BankAccount& account)
{
	std::cout << "Informacje o koncie bankowym \n";
	std::cout << "W³aœcicel: " << account.owner << "\n";
	std::cout << "Saldo: " << account.balance << " " << account.currency << '\n';
}

void DepositToAccount(double amount)
{
	if (amount >= 0)
		balance = balance + amount;
}

bool WidthdrawalFromAccounts(double amount)
{
	if (amount >= 0
		&& balance >= amount)
	{
		balance = balance - amount;
		return true;
	}
	return false;
}



void transferBetweenAccounts(BankAccount& sourceAccount, BankAccount& targetAccount, double amount)
{
	if (WidthdrawalFromAccounts(sourceAccount,  amount))
		targetAccount.DepositToAccount(amount);

}
int main()
{
	BankAccount firstAccount;
	firstAccount.balance = 7200;
	firstAccount.owner = "Jan Kowalski";
	firstAccount.currency = "z³";

	firstAccount.AccountInformation();

	BankAccount secondAccount;
	secondAccount.balance = 3200;
	secondAccount.owner = "Ewa Nowak";
	secondAccount.currency = "z³";
	secondAccount.AccountInformation();

	DepositToAccount(100);
	firstAccount.AccountInformation();

	accountInformation(secondAccount);
	firstAccount.AccountInformation();
}

