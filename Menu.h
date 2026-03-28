#pragma once

#include "People.h"
#include "Accounts.h"
#include <iostream>
#include <string>

class Menu
{
private:
    
public:
    Menu(){};

    void Main_Display();
    void Add_Person_display(People&);
    void Delete_person_display(People&, Accounts&);
    void Make_Account_Display(People&,Accounts&);
    void Person_info_Display(People);
    void Person_info_Display(People, std::string);
    void Person_account_Display(Accounts);
    void People_List_Display(People);
    void People_with_account_Display(Accounts);
};
