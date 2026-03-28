#include "Accounts.h"

void Accounts::AddToAccounts(const Account& account)
{
    List_Of_Accounts.push_back(account);
    Num_of_Accounts++;
}
void Accounts::DeleteFromAccounts(Account& account)
{
    List_Of_Accounts.erase
    (
        std::remove_if(List_Of_Accounts.begin(), List_Of_Accounts.end(),[&](const Account& a)
        {
            return a == account; 
        }),List_Of_Accounts.end()
    );
}
void Accounts::print_AccountsList()
{
    std::cout << "Names: " << std::endl;
    for(int i = 0; i < Num_of_Accounts; i++)
    {
        std::cout << i << ". " << List_Of_Accounts.at(i).getAccountName() << std::endl;
    }
}
bool Accounts::findPerson(const std::string given_name)
{
    bool found = false;
    auto iterator = std::find_if(List_Of_Accounts.begin(), List_Of_Accounts.end(), [&](Account &p)
    {
        return p.getAccountName() == given_name;
    });

    if(iterator != List_Of_Accounts.end())
    {
        found = true;
    }
    return found;
}
Account Accounts::returnAtName(const std::string given_name)
{
    for(int i = 0; i < List_Of_Accounts.size(); i++)
    {
        if(given_name == List_Of_Accounts.at(i).getAccountName())
        {
            return List_Of_Accounts.at(i);
        }
    }        
    return List_Of_Accounts.at(List_Of_Accounts.size());
}
