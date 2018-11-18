#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "database.h"
using namespace std;

database::database()
{
}
int database::entry()
{
    std::vector <std::string> values;
    //ctor
    int id;
    //int name, dept;
    char name[25], dept[20];
    cout << "\nEnter the ID: ";
    cin >> id;
    cout << "Enter the name: ";
    cin >> name;
    cout << "Enter the dept: ";
    cin >> dept;
    values.push_back(name);
    values.push_back(dept);
    inventory[id] = values;
    cout << "\nUpdated successfully!\n" << endl;

    for(std::map<int, vector<std::string>>::iterator it = inventory.begin(); it != inventory.end(); ++it)
    {
        cout << "["<< it->first << ": ";
        for (std::vector<std::string>:: iterator it2 = it->second.begin(); it2 != it->second.end(); ++it2)
        {
            std::cout << *it2 << ", ";
        }
        cout << "]\n";
    }
}
int database::find_Emp(int id_search)
{
    int id = id_search, trig = 0;
    if (inventory.find(id) == inventory.end())
    {
        cout << "Id does not exist!" << endl;
    }
    else
    {
        cout << "Id: "<< id << endl;

        for(std::map<int, vector<std::string>>::iterator it = inventory.begin(); it != inventory.end(); ++it)
            {
            if (it->first == id)
            {
                for (std::vector<std::string>:: iterator it2 = it->second.begin(); it2 != it->second.end(); ++it2)
                {
                    if (trig == 0){std::cout << "Name: " << *it2 << endl;trig++;}
                    else {std::cout << "Dept: " << *it2 << endl;}

                }
            }
            }
    }
return 0;
}
