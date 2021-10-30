#pragma once
#include <string>

class Debit
{
	// private attributes
	int cardNumber;
	int passcode;
	std::string cardHolder;
	std::string bank;
	double balance;

public:
	// constructor with default values
	Debit(int card = 0, int pass = 0, std::string holder = "unknown", std::string bank = "unknown", double balance = 0.0) : 
		cardNumber(card), passcode(pass), cardHolder(holder), bank(bank), balance(balance) {}

	// getter
	constexpr double get_balance() { return balance; }

	// functions of the card
	inline bool passcode(int pass) { return pass == passcode; }

	void printBalance();

	// can only withdraw bills (so multiples of 5)
	void withdraw(int amount);
};

