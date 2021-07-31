#include <iostream>
#include <vector>
#include "Letters.h"


int main(){
    
    Letters letters;
    letters.getInput();

    char input;
    while (std::cin >> input && input !='.'){
        
        if (letters.readAndOutput(input)) std::cout << '\n';
		else std::cout << "---" << '\n';
    }
    
    return 1;
}
