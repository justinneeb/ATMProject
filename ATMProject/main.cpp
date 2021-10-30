#include <iostream>
#include "Debit.h"
#include <memory>

// print menu function
void printMenu() {
	std::cout << "\nATM Options Menu\n"
		<< "1. Display balance\n"
		<< "2. Withdram\n"
		<< "3. Deposit\n"
		<< "4. Print Transaction History\n"
		<< "5. Exit\n\n";
}

int verifyAmount() {
	bool flag = false;
	
	while (!flag) {
		int amount;

		std::cout << "Please enter an amount: ";
		std::cin >> amount;

		if (amount % 5 != 0) {
			std::cout << "Please enter an amount that can be deposited/withdrawn as bills\n";
		}
		else {
			return amount;
		}
	}
	return 0;
}

int main() {
	// create a shared_ptr for a debit card 
	std::shared_ptr<Debit> debit = std::make_shared<Debit>(2378, 5445, "Justin Neeb", "RBC", 100.20);

	// variable to hold selection
	int option = 0;

	//display menu
	while (option != 5) {
		printMenu();

		std::cout << "Please enter option number: ";
		std::cin >> option;

		if (option == 1) {
			debit->printBalance();
		}
		else if (option == 2) {
			debit->withdraw(verifyAmount());
		}
		else if (option == 3) {
			debit->deposit(verifyAmount());
		}
		else if (option == 4) {
			debit->printTransactions();
		}
	}


	return 0;
}