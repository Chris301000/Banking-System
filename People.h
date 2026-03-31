#pragma once

#include <iostream>
#include "Person.h"
#include <vector>
#include <algorithm>

class People
{
private:
    std::vector<Person> peopleList;
    int numPeople = 0;
public:
    People(){};
    //~People();
    void addPerson(Person person)
    {
        peopleList.push_back(person);
        numPeople++;
    };
    void deletePerson(std::string name)
    {
        bool found = false;
        for(std::vector<Person>::iterator i = peopleList.begin(); i != peopleList.end(); i++)
        {
            if(name == i->getName())
            {
                found = true;

                peopleList.erase(i);
            }
        }
        if(found)
        {
            std::cout << "Successfully deleted." << std::endl;
        }
        else
        {
            std::cout << "Unable to delete, given invalid name not found." << std::endl;
        }
    }
    void PeopleList()
    {
        std::cout << "Names: " << std::endl;
        for(int i = 0; i < peopleList.size(); i++)
        {
            std::cout << peopleList.at(i).getName() << std::endl;
        }  
    }
    int numOfPeople(){return numPeople;};
    std::vector<Person> returnVector(){return peopleList;};
    Person& returnAtIndex(const int index){return peopleList.at(index);};
    Person& returnAtName(std::string name)
    {
        for(int i = 0;i < peopleList.size(); i++)
        {
            if(name == peopleList.at(i).getName())
            {
                return peopleList.at(i);
            }
        }
        return peopleList.at(peopleList.size());
    }
    bool findPerson(const std::string given_name, int &index)
    {
        bool found = false;
        auto iterator = std::find_if(peopleList.begin(), peopleList.end(), [&](Person &p)
        {
            return p.getName() == given_name;
        });

        if(iterator != peopleList.end())
        {
            found = true;
            index = std::distance(peopleList.begin(), iterator);
        }
        return found;
    }
    bool findPerson(const std::string given_name)
    {
        bool found = false;
        auto iterator = std::find_if(peopleList.begin(), peopleList.end(), [&](Person &p)
        {
            return p.getName() == given_name;
        });

        if(iterator != peopleList.end())
        {
            found = true;
        }
        return found;
    }
};
