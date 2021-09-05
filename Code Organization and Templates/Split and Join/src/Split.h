#ifndef SPLIT_H
#define SPLIT_H

#include <string>
#include <sstream>
#include <vector>

template <typename T>
T parse (std::string s){
    std::istringstream sIn(s);
    T t;
    sIn >> t;

    return t;
}

template <typename T>
std::vector<T> split (std::string& line, char separator){
    std::istringstream sIn(line);

    std::vector <T> output;
    std::string strToParse;

    while(std::getline(sIn, strToParse, separator)){
        output.push_back(parse<T>(strToParse));
    }
    return output;
}

#endif //SPLIT_H