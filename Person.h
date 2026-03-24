#include "Account.h"
#include <string>

class Person
{
private:
    std::string name = "None";
    Account account;
    bool hasAccount;
public:
    Person(std::string Name):name(Name), hasAccount(false){};
    //~Person();
    std::string getName(){return this->name;};
    Account getAccount(){return this->account;};
    bool HaveAccount(){return this->hasAccount;};
    void setHasAccount(){hasAccount = true;};
};
