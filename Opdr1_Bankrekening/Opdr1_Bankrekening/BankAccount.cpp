#include <iostream>
#include "BankAccount.h"
#include "Transaction.h"

void BankAccount::operator+=(Transaction* transaction) {
	// Add transaction to history
	this->history.push_back(transaction);

	// Update balance
	if (transaction->depreciation == true) {
		this->balance = this->balance - transaction->amount;
	}
	else {
		this->balance = this->balance + transaction->amount;
	}
}

std::ostream& operator<<(std::ostream& os, const BankAccount& bankAccount)
{
	std::cout << "Balance: " << bankAccount.balance << std::endl;
	std::cout << "Transactions: " << std::endl;

	for (size_t i = 0; i < bankAccount.history.size(); i++) {
        const Transaction* transaction = bankAccount.history[i];
        std::string minus = "";
        if (transaction->depreciation == true) {
            minus = "-";
        };
        std::cout << minus << transaction->amount << " on " << transaction->date << std::endl;
    };

	return os;
}