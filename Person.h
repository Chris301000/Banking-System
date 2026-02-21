#include "Account.h";
#include <string>

class Person
{
private:
    std::string name;
    Account account;
public:
    Person(std::string Name):name(Name){};
    ~Person();
};
