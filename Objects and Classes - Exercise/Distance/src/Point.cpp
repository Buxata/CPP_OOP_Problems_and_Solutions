#include "Point.h"
#include <iomanip>

int main (){
    Point p1;
    Point p2;
    double distance = p1.distanceToPoint(p2);
    std::cout << std::fixed <<std::setprecision(3) << distance;

}