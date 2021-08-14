#include "TotalAverageOfStudents.h"
#include <list>

int main (){
    std::list <Student> students;
    int studentAmount = 0;
    std::cin >> studentAmount;
    for (int i = 0; i < studentAmount; i++)
    {
        Student student;
        students.push_back(student);
    }

    if(!students.empty()){
        double totalAverage = 0;
        for(auto student : students){
            student.print();
            totalAverage+=student.getScore();
        }
        std::cout << totalAverage/studentAmount;
    }
    else std::cout<<"Invalid Input";
    
    return 1;
}