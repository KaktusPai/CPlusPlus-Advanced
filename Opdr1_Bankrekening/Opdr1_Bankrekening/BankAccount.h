#pragma once
#include <iostream>
#include "Transaction.h"
#include <vector>

class BankAccount {
	public:
		double balance;
		std::vector<Transaction*> history;

		void operator+=(Transaction* transaction);

		friend std::ostream& operator<<(std::ostream& os, const BankAccount& bankAccount);
};