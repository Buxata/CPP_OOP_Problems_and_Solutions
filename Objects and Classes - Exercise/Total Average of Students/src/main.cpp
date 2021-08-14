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

#include <list>

int main (){
    std::list <Student> students;
    int studentAmount = 0;
    std::cin >> studentAmount;
    if(studentAmount >0){
        for (int i = 0; i < studentAmount; i++)
        {
            Student student;
            students.push_back(student);
        }
    }

    if(!students.empty()){
        double totalAverage = 0;
        for(auto &student : students){
            student.print();
            totalAverage+=student.getScore();
        }
        std::cout << totalAverage/studentAmount;
    }
    else std::cout<<"“Invalid input”";
    
    return 1;
}
