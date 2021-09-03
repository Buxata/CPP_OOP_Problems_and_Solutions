#ifndef PARSER_H
#define PARSER_H

#include <sstream>
#include <istream>
#include <string>

template <typename T>
class Parser
{
private:
    std::istream& input;
    std::string stopLine;
public:
    Parser(std::istream& in, std::string stopline): input(in), stopLine(stopline){}
    ~Parser(){
        
    }

    bool readNext(T& next){
        std::string line;
        std::getline(this->input, line);

        if(line != stopLine){
            std::istringstream lineIn(line);
            lineIn >> next;
            return true;            
        }
        else return false;
    }
};

#endif // PARSER_H