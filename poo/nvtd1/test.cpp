#include "Point.h"
#include<iostream>




int main(){
    Point A(1, 4.0);
    Point B(5, 2);

    A.print();
    B.print();
    double d = A.distance(A,B);

    std::cout
    << "la distance entre les pts A et B vaut "<<d
    <<"\n"<<
    std::endl;

    Point C = A.center(A,B);
    C.print();

    return 0;
}