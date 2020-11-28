#pragma once
#include "Transaction.h"
#include <vector>

class BankAccount {
	public:
		float balance;
		void addTransaction(Transaction* transaction);
		std::vector<Transaction*> history;
};