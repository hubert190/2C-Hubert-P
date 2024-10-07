// FirstObjectConsoleApplication.cpp 




void transferBetweenAccounts(BankAccount& sourceAccount, BankAccount& targetAcccount, double amount)
{
	if (sourceAccount.WidthdrawalFromAccount(amount))
		targetAcccount.DepositToAccount(amount);

}

int main()
{
	BankAccount firstAccount;
	firstAccount.balance = 7200;
	firstAccount.owner = "Jan Kowalski";
	firstAccount.currency = "z³";

	firstAccount.AccountInformation();

	//accountInformation(firstAccount);

	BankAccount secondAccount;
	secondAccount.balance = 3200;
	secondAccount.owner = "Ewa Nowak";
	secondAccount.currency = "z³";

	secondAccount.AccountInformation();

	firstAccount.DepositToAccount(100);
	firstAccount.AccountInformation();

	firstAccount.WidthdrawalFromAccount(200);
	firstAccount.AccountInformation();
	secondAccount.AccountInformation();

	transferBetweenAccounts(firstAccount, secondAccount, 8100);

	firstAccount.AccountInformation();
	secondAccount.AccountInformation();

}