#include "Menu.h"

void Menu::Main_Display()
{
    std::cout << "1.Add a person\n2.Make an account \n3.Delete a person \n4.Get person information \n5.Get account information \n6.List of people \n7.List of accounts \n8.Quit" << std::endl;
};
void Menu::Add_Person_display(People& people)
{
    std::string name;
    std::cout << "Name to add: ";
    std::cin >> name;
    Person person(name);
    people.addPerson(person);
};
void Menu::Delete_person_display(People& people, Accounts& accounts)
{
    People_List_Display(people);
    std::cout << "Who would you like to delete, please input a valid name:" << std::endl;
    std::string find;
    int index;
    bool exists = people.findPerson(find, index);
    if(exists)
    {
        Account account = people.returnAtIndex(index).getAccount();
        accounts.DeleteFromAccounts(account);
        people.deletePerson(find);
        std::cout << "Deletion was sucessfull." << std::endl;
    }
    else
    {
        std::cout << "Unable to delete as this person does not exist." << std::endl;
    }
};
void Menu::Make_Account_Display(People& people, Accounts& accounts)
{
    std::string user_given_name;
    int index;
    std::cout << "Who would you like to make an account for?" << std::endl;
    people.PeopleList();
    std::cin >> user_given_name;
    if(people.findPerson(user_given_name, index))
    {
        std::string username;
        std::string password;
        int account_number;
        int four_digit_num;
        // std::cout << "In what bank would you like to make this account?" << std::endl;
        std::cout << "Please make a username for this account: " << std::endl;
        std::cin >> username;
        std::cout << "Please make a password for this account: " << std::endl;
        std::cin >> password;
        std::cout << "Please make a 4 digit pin: " << std::endl;
        std::cin >> four_digit_num;
        account_number = rand();
        people.returnAtIndex(index).getAccount().setAccountFourDigitSum(four_digit_num);
        people.returnAtIndex(index).getAccount().setAccountName(people.returnAtIndex(index).getName());
        people.returnAtIndex(index).getAccount().setAccountNum(account_number);
        people.returnAtIndex(index).getAccount().setAccountPassword(password);
        people.returnAtIndex(index).getAccount().setAccountUsername(username);
        people.returnAtIndex(index).setHasAccount();
        accounts.AddToAccounts(people.returnAtIndex(index).getAccount());
    }
    else
    {
        std::cout << "Person was not found with given name. Unable to make an account for non-existant person." << std::endl;
    }
};
void Menu::Person_info_Display(People people)
{
    std::string user_given_name;
    People_List_Display(people);
    std::cout << "Who would you want to see the person information about?" << std::endl;
    std::cin >> user_given_name;
    if(people.findPerson(user_given_name))
    {
        Person person_info_to_display = people.returnAtName(user_given_name);
        std::cout << "Name: " << person_info_to_display.getName() << std::endl;
        std::cout << "Has a account: ";
        if(person_info_to_display.HaveAccount())
        {
            std::cout << "Yes" << std::endl;
        }
        else
        {
            std::cout << "No" << std::endl;
        }
    }
    else
    {
        std::cout << "The given name was not able to be found in the list. Unable to display a non-existant person's information." << std::endl; 
    }
};
void Menu::Person_info_Display(People people, std::string name)
{
    if(people.findPerson(name))
    {
        Person person_info_to_display = people.returnAtName(name);
        std::cout << "Name: " << person_info_to_display.getName() << std::endl;
        std::cout << "Has a account: ";
        if(person_info_to_display.HaveAccount())
        {
            std::cout << "Yes" << std::endl;
        }
        else
        {
            std::cout << "No" << std::endl;
        }
    }
    else
    {
        std::cout << "The given name was not able to be found in the list. Unable to display a non-existant person's information." << std::endl; 
    }
};
void Menu::Person_account_Display(Accounts accounts)
{
    std::string user_given_name;
    accounts.print_AccountsList();
    std::cout << "Who would you want to see the person account information about?" << std::endl;
    std::cin >> user_given_name;
    if(accounts.findPerson(user_given_name))
    {
        Account person_account = accounts.returnAtName(user_given_name);
        std::cout << "Account Name: " << person_account.getAccountName() << std::endl;
        std::cout << "Account Number: " << person_account.getAccountNum() << std::endl;
        std::cout << "Account Username: " << person_account.getAccountUsername() << std::endl;
        std::cout << "Account Password: " << person_account.getAccountPassword() << std::endl;
        std::cout << "Account Four Digit Pin: " << person_account.get_four_digit_num() << std::endl; 
    }
    else
    {
        std::cout << "Unable to display the account since there is no account for a non-existant person." << std::endl;
    }
};
void Menu::People_List_Display(People people)
{
    std::cout << "People List: " << std::endl;
    people.PeopleList();

};
void Menu::People_with_account_Display(Accounts accounts)
{
    std::cout << "People with Account List: " << std::endl;
    accounts.print_AccountsList();
};


