#include "Point.h"
#include<iostream>
#include<cmath>

// Q1.2
Point::Point(double x_coord, double y_coord){
    this->x = x_coord;
    this->y = y_coord;
}

double Point::distance(Point a, Point b) const{
    double res_x = (b.x - a.x) * (b.x - a.x);
    double res_y = (b.y - a.y) * (b.y - a.y);
    double res = sqrt(res_x + res_y);
    return res;
}

Point Point::center(Point a, Point b)const{
    double tmp_x = (a.x + b.x) / 2;
    double tmp_y = (a.y + b.y) / 2;
    return Point(tmp_x, tmp_y);
}

void Point::print()const{
    std::cout
    << "(" << x << ", " 
    << y << ")\n" 
    << std::endl;
}

//Q-1.3
// est vide
bool ListP::isempty(){

    return head == nullptr; //revoir car faux
}

// insert point p en pos si pos existe sinon queue de liste
void ListP::push_pos(int pos, Point p, struct list **L){
    list *N = new struct list;
    N->pt = p, N->next = nullptr;
    
    

    
}  