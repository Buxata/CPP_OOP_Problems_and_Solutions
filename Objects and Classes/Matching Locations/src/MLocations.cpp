#include "MLocations.h"
#include <vector>

int main (){
    std::vector <Locations> locations;

    std::string input;
    while (getline(std::cin, input)&& input!="."){
        locations.push_back(Locations(input));
    }
    
    while (getline(std::cin, input)&& input!="."){
        for(auto location : locations){
            location.printMatch(input);
        }
    }

    return 1;

}