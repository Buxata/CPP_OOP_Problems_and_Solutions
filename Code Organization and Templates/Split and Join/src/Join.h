#ifndef JOIN_H
#define JOIN_H

#include <vector>
#include <string>
#include <sstream>

template <typename T>
std::string join (std::vector <T> vec,std::string joiner){
    size_t vecSize = vec.size();
    std::ostringstream out;

    for (size_t i = 0; i < vecSize; i++)
    {
        out << vec[i];
        if( i < vecSize-1){
            out << joiner;
        }
    }
    return out.str();
}

#endif //JOIN_H