#pragma once
#include <string>
#include <vector>

class Debit
{
	// private attributes
	int cardNumber;
	std::string cardHolder;
	std::string bank;
	double balance;
	std::vector<int> transactions;

public:
	// constructor with default values
	Debit(int card = 0, int pass = 0, std::string holder = "unknown", std::string bank = "unknown", double balance = 0.0) : 
		cardNumber(card), cardHolder(holder), bank(bank), balance(balance) {}

	// getter
	constexpr double get_balance() { return balance; }

	void printBalance();

	// can only withdraw bills (so multiples of 5)
	void withdraw(int amount);
	void deposit(int amount);
	void printTransactions();
};

