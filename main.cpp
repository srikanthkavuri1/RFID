#include <iostream>
#include "database.h"

using namespace std;

int main()
{
    int input;
    cout << "1. Enter the info" << endl;
    cout << "2. Get the info" << endl;
    cout << "3. Quit" << endl;
    cout << "Please choose the above options: ";
    cin >> input;

    database n;

    while (true)
    {
    // Enter the info
    if(input == 1)
    {
        n.entry();
    }
    else if(input == 2)
    {
        int id;
        cout <<"\nEnter the Id to search: ";
        cin >> id;
        cout << n.find_Emp(id) << endl;
        break;
    }
    else if(input == 3)
    {
        cout << "Quit" <<endl;
        break;
    }
    cout << "\n1. Enter the info" << endl;
    cout << "2. Get the info" << endl;
    cout << "3. Quit" << endl;
    cout << "Please choose the above options: ";
    cin >> input;
    }
    return 0;
}
