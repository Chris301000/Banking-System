#include <iostream>
#include "People.h"
#include "Menu.h"
#include "Bank.h"

int main()
{
    Menu menu;
    // Bank bank;
    People people;
    Accounts accounts;
    Bank bank("Chase", accounts);

    int option;

    menu.Main_Display();
    std::cin >> option;
    while(option != 8)
    {
        if(option == 1)
        {
            menu.Add_Person_display(people);
        }
        else if(option == 2)
        {
            menu.Make_Account_Display(people, accounts);
        }
        else if(option == 3)
        {
            menu.Delete_person_display(people);
        }
        else if(option == 4)
        {
            menu.Person_info_Display(people);
        }
        else if(option == 5)
        {
            menu.Person_account_Display(accounts);
        }
        else if(option == 6)
        {
            menu.People_List_Display(people);
        }
        else if(option == 7)
        {
            menu.People_with_account_Display(accounts);
        }
        menu.Main_Display();
        std::cin >> option;
    }

    return 0;
}