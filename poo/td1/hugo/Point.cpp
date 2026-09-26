#include <iostream>
#include "Point.h"
#include <cmath>


Point::Point(double a,double b) : x{a}, y{b} {}
void Point::print(){
    std::cout << "Point: (x = " << x << ", y = " << y << ")\n";
}

/*
double Point::distance(double x1,double y1,double x2, double y2){
    double dx = x2 - x1;
    double dy = y2 - y1;
    double distance = std::sqrt(dx * dx + dy * dy);
    return distance;

}
    */

double Point::distance(double x2, double y2){
    double dx = x2 - x;
    double dy = y2 - y;
    double distance = std::sqrt(dx * dx + dy * dy);
    return distance;

}


friend double Point::distance2(const Point& p1, const Point& p2){
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    double distance = std::sqrt(dx * dx + dy * dy);
    return distance;

}

Point Point::center(Point p2){
    Point m(0.0,0.0);
    m.x = (x + p2.x) / 2;
    m.y = (y + p2.y) / 2;
    return m;

}



/*
class Point{
    private:
        double x;
        double y;
    public:
        Point(double x,double y){
            this->x = x;
            this->y = y;
        }
        void print(){
            std::cout << "x : " << x << "\n";
            std::cout << "y : " << y << "\n";
        }
        double distance(double x1,double y1,double x2, double y2){
            //(x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1)
            double d = (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1);
            return d;


        }

};


int main(){
    Point p1(1.4,2.5);
    p1.print();

    return 0;
}
 */