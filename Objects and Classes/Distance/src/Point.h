#include <iostream>
#include <string>
#include <sstream>
#include <math.h>

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

double calcDistance(Point p1, Point p2){
    double distance = sqrt(pow((p1.getX()-p2.getX()),2) + pow(p1.getY()-p2.getY()));
    return distance;
}
