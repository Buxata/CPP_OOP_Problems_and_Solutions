#include <iostream>
#include <vector>
#include <string>
#include <ostream>



class SentenceShifter {
    public:
    SentenceShifter(){
        getline(std::cin, sentences);
    }
    private:
    std::string sentences;
};
