#ifndef _BANK_ACCOUNT_H_
#define _BANK_ACCOUNT_H_

#include <iostream>
#include <iomanip>

class BankAccount
{
public:
	BankAccount();
	BankAccount(float balance);
	BankAccount operator+(const BankAccount& b);
	BankAccount operator+(float b); 
	BankAccount operator-(const BankAccount& b);
	BankAccount operator-(float b);
	bool operator==(const BankAccount& b);
	bool operator<(const BankAccount& b);
	bool operator>(const BankAccount& b);
	void ShowAccount();
private:
	float _balance;
};


#endif // !_BANK_ACCOUNT_H_

