#include "Debit.h"
#include <iostream>

void Debit::printBalance()
{
	std::cout << "The balance of this account is $" << this->get_balance() << std::endl;
}

void Debit::withdraw(int amount)
{
	if (amount > 0 && amount < this->balance && amount % 5 == 0) {
		this->balance -= amount;

		std::cout << "$" << amount << ".00 withdrawn from account " << this->cardNumber << std::endl;
		transactions.push_back(-amount);
		printBalance();
	}
}

void Debit::deposit(int amount)
{
	if (amount > 0 && amount % 5 == 0) {
		this->balance += amount;

		std::cout << "$" << amount << ".00 deposited into account " << this->cardNumber << std::endl;
		transactions.push_back(amount);
		printBalance();
	}
}

void Debit::printTransactions()
{
	for (unsigned int i = 0; i < transactions.size(); i++) {
		if (i < 10) {
			std::cout << i + 1 << ". " << transactions[i] << ".00" << std::endl;
		}
	}
}
