#ifndef COMPANYMEMORYUTILS_H
#define COMPANYMEMORYUTILS_H

#include <cstring>
#include "Company.h"

typedef unsigned char byte;

std::vector<Company> readCompaniesFromMemory(byte *mem, int numCompanies){
    std::vector<Company> companies;
    char* localMemory = (reinterpret_cast<char*>(mem));
    unsigned char id = 0;
    unsigned char empCount =0;
    std::string name;
    std::vector<std::pair<char,char>> employees;

    for (int i =0; i<numCompanies; i++){
        if(!employees.empty())employees.clear();
        id = *localMemory;
        localMemory+=sizeof(id);

        size_t nameLength = strlen(localMemory);
        name = std::string(localMemory, nameLength);
        localMemory += nameLength + 1;
        
        empCount = *localMemory;
        localMemory += sizeof(empCount);
        for (unsigned char employeeID =0; employeeID<empCount; employeeID++){
            std::pair<char,char> currEmployee;
            currEmployee.first = *localMemory;
            localMemory += sizeof(currEmployee.first);
            currEmployee.second = *localMemory;
            localMemory += sizeof(currEmployee.second);
            employees.push_back(currEmployee);
        }
        companies.emplace_back(id,name,employees);
    }
    return companies;
}
#endif //COMPANY_MEMORY_UTILS_H