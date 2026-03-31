#pragma once

#include <iostream>
#include "Account.h"
#include <vector>
#include <string>

class Accounts
{
private:
    std::vector<Account> List_Of_Accounts;
    int Num_of_Accounts = 0;
public:
    Accounts(){};
    void AddToAccounts(const Account&);
    void DeleteFromAccounts(Account&);
    int getNumAccounts(){return this->Num_of_Accounts;};
    void print_AccountsList();
    bool findPerson(const std::string);
    Account returnAtName(const std::string);
};