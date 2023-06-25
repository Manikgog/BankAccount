#include <iostream>
#include <locale.h>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include "BankAccount.h"

int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251); // установка кодовой страницы на ввод текста
	
	BankAccount b1(11200.23);
	BankAccount b2(11200.24);
	BankAccount b3(11200.23);
	assert(b1 == b3);
	assert(b2 > b1);
	assert(b1 < b2);
	BankAccount b4;
	b4 = b1 + b2;
	b4 = b2 - b1;
	b4 = b1 + 100.30;
	b4 = b1 - 100.23;
	return 0;
}
