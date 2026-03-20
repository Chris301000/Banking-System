#define BANK_H
#ifdef BANK_H

#include "Account.h"
#include "Accounts.h"

class Bank
{
private:
    std::string Bankname;
public:
    Bank(std::string givenName):Bankname(givenName){};
    //~Bank();
};

#endif
