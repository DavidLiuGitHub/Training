#include <algorithm>
#include <vector>
#include <iostream>

struct employee
{
    std::string name;
    int id;
};

auto find_id(const std::string &name, const std::vector<employee> & employees)
{
    auto match = [&name](const employee & em){return em.name == name;}; 
    auto ii = find_if(employees.begin(), employees.end(), match);
        
    if (ii == employees.end()) 
        return -1;
    else
        return ii->id;
}

int main()
{
    std::vector<employee> em = {
       {"liudongxu", 1},
       {"liudongxu02", 3},
       {"liudongxu03", 2}

   };
    std::cout<<find_id("liudongxu04",em)<<std::endl;
    std::cout<<find_id("liudongxu03",em)<<std::endl;
}

