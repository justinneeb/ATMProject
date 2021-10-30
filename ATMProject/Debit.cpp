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
		printBalance();
	}
}
