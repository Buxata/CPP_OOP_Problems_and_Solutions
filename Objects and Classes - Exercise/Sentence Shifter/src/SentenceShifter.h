#include <iostream>
#include <iostream>
#include <deque>
#include <string>
#include <sstream>

typedef std::deque <std::string> Words;

class SentenceShifter
{
private:
    Words _words;
    size_t _shiftsCount = 0;
public:
    void readInput(){
        std::string line;
        std::getline(std::cin, line);
        std::stringstream str(line);

        std::string word;
        while(str>>word){
            _words.push_back(word);
        }

        std::cin >> _shiftsCount;
        std::cin.ignore();
    }
    void shiftsentence(){
        if(_words.empty()) return;
        
        for (size_t i = 0; i < _shiftsCount; i++)
        {
            std::string word = _words.back();
            _words.pop_back();
            _words.push_front(word);
        }
        
    }

    Words getShiftedSentence() const{
        return _words;
    }
};


