#include <iostream>
#include "BankAccount.h"
#include "Transaction.h"

void BankAccount::addTransaction(Transaction* transaction) {
	std::cout << transaction << std::endl;
	// Add transaction to history
	// this->history.push_back(transaction);

	/* Update balance
	if (transaction.depreciation == true) {
		this->balance = this->balance - transaction.amount
	}
	else {
		this->balance = this->balance + transaction.amount
	}*/
}
