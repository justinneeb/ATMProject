#include <iostream>
#include "Debit.h"
#include <memory>

// print menu function
void printMenu() {
	std::cout << "ATM Options Menu\n"
		<< "1. Display balance\n"
		<< "2. Deposit\n"
		<< "3. Withdraw\n\n";
}

int main() {
	// create a shared_ptr for a debit card 
	std::shared_ptr<Debit> debit = std::make_shared<Debit>(2378, 5445, "Justin Neeb", "RBC", 100.20);

	// variable to hold selection
	int option;

	//display menu
	printMenu();
	
	std::cout << "Please enter option number: ";
	std::cin >> option;

	if (option == 1) {
		debit->printBalance();
	}
	else if (option == 2) {

	}


	return 0;
}