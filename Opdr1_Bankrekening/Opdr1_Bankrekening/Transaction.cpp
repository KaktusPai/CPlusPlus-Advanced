#include "Transaction.h"
#include <iostream>
#include <string>

Transaction::Transaction(bool dep, float amo, std::string dat) {
	this->depreciation = dep;
	this->amount = amo;
	this->date = dat;
}
