#include <iostream>
#include "SentenceShifter.h"

int main (){
    SentenceShifter shifter;
    shifter.readInput();
    shifter.shiftsentence();
    const auto shiftedWords = shifter.getShiftedSentence();
    for(const auto& word : shiftedWords){
        std::cout << word << "\n";
    }
    return 1;
}
