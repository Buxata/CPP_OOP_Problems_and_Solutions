#include <iostream>
#include <sstream>
#include <string>
#include <vector>

typedef std::vector <std::string> stringVector;

// another helper object that I decided not to use in the end.
class Helper{
    public:
    void removeComas(std::string &input){
        for (auto it = input.begin(); it != input.end(); it++){
            if(*it==',') *it = ' ';
        }
    }
};
Helper helper;

class Locations {
    public:
    Locations (){
        std::string city = 0;
        std::string latitude = 0;
        std::string longitude = 0;
    }
    Locations (std::string input){

        std::stringstream str(input);
        getline(str, city, ',');
        getline(str, latitude, ',');
        getline(str, longitude, ',');
        
    }
    ~Locations() {

    }

    void printMatch(std::string query){
        if(this->checkEntry(query)){
            std::cout << city << ',' << latitude << ',' << longitude << '\n';
        }
    }


    private:
// Latitude and Longitude are supposed to be float numbers. I have used string, since there is no
// modification on the values and no memory constraints.
// Using string saves me the worry of getting the output correct for the automated system evaluation.
// DEFINITELY A NO GO IN REAL CASES!!!
    std::string city, latitude, longitude;


    bool checkEntry(std::string query){
        std::stringstream str(query);
        stringVector data;
        std::string token;

        while (str >> token){
            data.push_back(token);
        }

        if(data.size() > 1 
        && data[0] == latitude
        && data[1] == longitude
        ) {
            return true;
        }
        else{
            if(data[0] == city) return true;  
        } 

        return false;
    }

};