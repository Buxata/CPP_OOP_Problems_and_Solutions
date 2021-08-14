#include <iostream>
#include <vector>
#include <string>
#include <sstream>


class SentenceShifter {
    public:
    SentenceShifter(){
        getline(std::cin, sentences);
    }

    std::string getShiftedSentence() {
        std::string shifted;
        std::stringstream str (sentences);

    }
    private:
    std::string sentences;
};
