#include <iostream>
#include <string>
#include "BankAccount.h"
#include "Transaction.h"

BankAccount bankAccount;

int main()
{
	const std::string date1 = "11-25-2020";
	const std::string date2 = "11-27-2020";
	const std::string date3 = "11-28-2020";
    // const transaction = new Transaction(true, 2.50, '11-28-2020')
    Transaction* t1 = new Transaction(false, 3.50, date1);
    Transaction* t2 = new Transaction(true, 1.50, date2);
    Transaction* t3 = new Transaction(false, 5.75, date3);
    bankAccount.addTransaction(t1);
    bankAccount.addTransaction(t2);
    bankAccount.addTransaction(t3);
}
