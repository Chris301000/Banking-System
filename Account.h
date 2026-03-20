#define ACCOUNT_H
#ifdef ACCOUNT_H

#include <string>

class Account
{
private:
    std::string accountName = "None";
    std::string accountPassword = "None";
    std::string accountUsername = "None";
    int accountNum = -1;
    int four_digit_num = -1;
public:
    Account(){};
    Account(std::string givenName,std::string givenPassword,std::string givenUsername, int GivenNum, int given_four_digit_num):accountName(givenName),accountPassword(givenPassword)
    ,accountUsername(givenUsername),accountNum(GivenNum),four_digit_num(given_four_digit_num){};
   // ~Account();
    // std::string getAccountName(std::string name)
    // {

    // }
};


#endif
