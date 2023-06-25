#include "BankAccount.h"



BankAccount::BankAccount() : _balance(0) {}

BankAccount::BankAccount(float balance) : _balance(balance) {}

BankAccount BankAccount::operator+(const BankAccount& b)
{
	BankAccount newAccount{_balance + b._balance};
	return newAccount;
}

BankAccount BankAccount::operator+(float b)
{
	BankAccount newAccount{ _balance + b };
	return newAccount;
}

BankAccount BankAccount::operator-(const BankAccount& b)
{
	BankAccount newAccount{ _balance - b._balance };
	return newAccount;
}

BankAccount BankAccount::operator-(float b)
{
	BankAccount newAccount{ _balance - b };
	return newAccount;
}

bool BankAccount::operator==(const BankAccount& b)
{
	if (_balance >= 0 && b._balance >= 0)
	{
		if (std::abs(_balance - b._balance) < 0.01)
			return true;
	}
	else if (_balance < 0 && b._balance < 0)
	{
		if (std::abs(std::abs(_balance) - std::abs(b._balance)) < 0.01)
			return true;
	}
		return false;
}

bool BankAccount::operator<(const BankAccount& b)
{
	if (_balance < 0 && b._balance >= 0)
		return true;
	else if (_balance < 0 && b._balance < 0)
	{
		if (std::abs(_balance) - std::abs(b._balance) > 0.009)
			return true;
	}
	else if (_balance > 0 && b._balance > 0)
	{
		if ((b._balance - _balance) > 0.009)
			return true;
	}
	return false;
}

bool BankAccount::operator>(const BankAccount& b)
{
	if (_balance < 0 && b._balance >= 0)
		return true;
	else if (_balance < 0 && b._balance < 0)
	{
		//float f = std::abs(b._balance) - std::abs(_balance); // для отладки
		if (std::abs(b._balance) - std::abs(_balance) > 0.009)
			return true;
	}
	else if (_balance > 0 && b._balance > 0)
	{
		//float f = _balance - b._balance;		// для отладки
		if ((_balance - b._balance) > 0.009)
			return true;
	}
	return false;
}

void BankAccount::ShowAccount()
{
	std::cout << "Bank account balance = "; 
	std::cout << std::setprecision(2) << _balance << std::endl;
}