#pragma once
#include <string>
#include <iostream>

class Transaction {
	public:
		Transaction(bool dep, float amo, std::string dat);
		bool depreciation;
		double amount;
		std::string mdy;
};