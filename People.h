#define PEOPLE_H
#ifdef PEOPLE_H

#include "Person.h"
#include <vector>

class People
{
private:
    std::vector<Person> peopleList;
    int numPeople = 0;
public:
    People();
    //~People();
    void addPerson(Person person)
    {
        peopleList.push_back(person);
        numPeople++;
    };
    void deletePerson(std::string name)
    {
        for(std::vector<Person>::iterator i = peopleList.begin(); i != peopleList.end(); i++)
        {
            if(name == i->getName())
            {
                peopleList.erase(i);
            }
        }
    }
    int numOfPeople(){return numPeople;};
};

#endif
