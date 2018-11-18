#ifndef DATABASE_H
#define DATABASE_H
#include<string>
#include<map>
#include<vector>


class database
{
    std::map <int, std::vector<std::string>> inventory;
    public:
        database();
        int entry();
        int find_Emp(int id);
};

#endif // DATABASE_H
