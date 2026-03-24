#define ACCOUNT_H
#ifdef ACCOUNT_H

#include <string>
#include <random>

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
    void setAccountName(std::string account_name){this->accountName = account_name;};
    void setAccountPassword(std::string account_password){this->accountPassword = account_password;};
    void setAccountUsername(std::string account_username){this->accountUsername = account_username;};
    void setAccountNum(int account_num){this->accountNum = account_num;};
    void setAccountFourDigitSum(int account_four_digit){this->four_digit_num = account_four_digit;};
    std::string getAccountName(){return this->accountName;};
    std::string getAccountPassword(){return this->accountPassword;};
    std::string getAccountUsername(){return this->accountUsername;};
    int getAccountNum(){return this->accountNum;};
    int get_four_digit_num(){return this->four_digit_num;};
};


#endif
