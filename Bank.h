#pragma once

#include "Account.h"
#include "Accounts.h"

class Bank
{
private:
    std::string Bankname;
    Accounts BankAccounts;
public:
    Bank(std::string givenName, Accounts bankAccounts):Bankname(givenName),BankAccounts(bankAccounts){};
    //~Bank();
};
