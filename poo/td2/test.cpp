#include "geoobj.h"
#include<iostream>




int main(){
    /*
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
    */
    //Triangle des bermudes
    Point A(2,3.4);
    Point B(1,1.4);
    Point C(5,2);
    /*
    std::cout
    <<"Triangle ABC :\n"<<
    std::endl;
    A.print();
    B.print();
    C.print();
    */

    //Carre
    Point D(1,1);
    Point E(1,3);
    Point F(3,3);
    Point G(3,1);
    /*
    std::cout
    <<"Carre DEFG :\n"<<
    std::endl;
    D.print();
    E.print();
    F.print();
    G.print();
    */
    //RECTANGLE
    Point H(1,1);
    Point I(1,5);
    Point J(5,5);
    Point K(5,1);
    /*
    std::cout
    <<"Rectangle HIJK :\n"<<
    std::endl;
    H.print();
    I.print();
    J.print();
    K.print();

    std::cout
    <<"Translation :\n"<<
    std::endl;  
    */
    triangle T(A,B,C);
    T.print();
    T.translate(2,2);
    std::cout
    <<"Apres Translation :\n"<<
    std::endl;
    T.print();
    
    return 0;
}