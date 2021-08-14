#include <iostream>
#include <string>
#include <iomanip>

class Student
{
private:
    std::string _firstName = "No_name", _lastName = "No_last_name";
    double _score=0;
public:
    Student(){
        std::cin >> _firstName >> _lastName >> _score;
    }
    void setFirstName(std::string name){
        _firstName = name;
    }
    void setLastName(std::string name){
        _lastName = name;
    }
    void setScore(double score){
        _score = score;
    }

    void print(){
        std::cout << _firstName << " " << _lastName <<  " " << _score << "\n";
    }
    double getScore(){
        return _score;
    }
};
