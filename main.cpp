#include <iostream>
#include "People.h"
#include "Menu.h"

int main()
{
    Menu menu;
    People people;

    int option;

    menu.Main_Display();
    std::cin >> option;
    if(option == 1)
    {
        menu.Add_Person_display();
    }
    else if(option == 2)
    {
        menu.Make_Account_Display();
    }
    else if(option == 3)
    {
        menu.Delete_person_display();
    }
    else if(option == 4)
    {
        menu.Person_info_Display();
    }
    else if(option == 5)
    {
        menu.Person_account_Display();
    }
    else if(option == 6)
    {
        menu.People_List_Display();
    }
    else if(option == 7)
    {
        menu.People_with_account_Display();
    }

    return 0;
}