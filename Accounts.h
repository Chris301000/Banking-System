#define ACCOUNTS_H
#ifdef ACCOUNTS_H

#include "Account.h"
#include <vector>
#include <string>

class Accounts
{
private:
    std::vector<Account> List_Of_Accounts;
    int Num_of_Accounts;
public:
    Accounts(/* args */);
    ~Accounts();
};

#endif
