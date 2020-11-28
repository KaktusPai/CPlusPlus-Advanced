#include <iostream>
#include <string>
#include "BankAccount.h"
#include "Transaction.h"

BankAccount bankAccount;

int main()
{
    // const transaction = new Transaction(true, 2.50, '11-28-2020')
    Transaction* t1 = new Transaction(false, 3.50, "11-25-2020");
    Transaction* t2 = new Transaction(true, 1.50, "11-27-2020");
    Transaction* t3 = new Transaction(false, 5.75, "11-28-2020");
    bankAccount.addTransaction(t1);
    bankAccount.addTransaction(t2);
    bankAccount.addTransaction(t3);
}
