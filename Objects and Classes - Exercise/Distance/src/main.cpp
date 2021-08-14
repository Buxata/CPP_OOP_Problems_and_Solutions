#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
#include <iomanip>

class Point
{
private:
    double _x,_y;
public:
    Point(){
        std::string line;
        getline(std::cin, line);
        std::stringstream str(line);

        str>>_x>>_y;
    }
    double getX(){
        return _x;
    }
    double getY(){
        return _y;
    }
    double distanceToPoint(Point point){
        double distance = sqrt(pow((_x-point.getX()),2) + pow((_y-point.getY()),2));
        return distance;
    }
};

int main (){
    Point p1;
    Point p2;
    double distance = p1.distanceToPoint(p2);
    std::cout << std::fixed <<std::setprecision(3) << distance;

}