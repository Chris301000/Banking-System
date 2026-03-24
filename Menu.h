#define MENU_H
#ifdef MENU_H

#include "People.h"
#include <iostream>
#include <string>

class Menu
{
private:
    
public:
    Menu(){};

    void Main_Display();
    void Add_Person_display();
    void Delete_person_display(People);
    void Make_Account_Display(People);
    void Person_info_Display(People);
    void Person_info_Display(People, std::string);
    void Person_account_Display(People);
    void People_List_Display(People);
    void People_with_account_Display(People);
};

#endif
