#include "geoobj.h"
#include<iostream>
#include<cmath>
// ----------------------- RESSOURCES TD1------------------------
// remplacé par IA à revoir  


// =======================
// Q-1.2 : classe Point
// =======================

Point::Point(double x_coord, double y_coord)
{
    this->x = x_coord;
    this->y = y_coord;
}


double Point::distance(Point a, Point b) const
{
    double res_x = (b.x - a.x) * (b.x - a.x);
    double res_y = (b.y - a.y) * (b.y - a.y);

    double res = sqrt(res_x + res_y);

    return res;
}


Point Point::center(Point a, Point b) const
{
    double tmp_x = (a.x + b.x) / 2;
    double tmp_y = (a.y + b.y) / 2;

    return Point(tmp_x, tmp_y);
}


void Point::print() const
{
    std::cout << "("
              << x
              << ", "
              << y
              << ")"
              << std::endl;
}


// =======================
// Q-1.3 : classe ListP
// =======================

ListP::ListP()
{
    head = nullptr;
}


bool ListP::isempty()
{
    return head == nullptr;
}


void ListP::push_pos(int pos, Point p)
{
    list *N = new list{p, nullptr};

    if (head == nullptr)
    {
        head = N;
        return;
    }

    if (pos <= 0)
    {
        N->next = head;
        head = N;
        return;
    }

    list *current = head;
    int i = 0;

    while (current->next != nullptr && i < pos - 1)
    {
        current = current->next;
        i++;
    }

    N->next = current->next;
    current->next = N;
}


void ListP::delete_pos(int pos)
{
    // Liste vide : rien à supprimer
    if (head == nullptr)
    {
        return;
    }

    // Suppression de la tête
    if (pos <= 0)
    {
        list *tmp = head;

        head = head->next;

        delete tmp;

        return;
    }

    list *current = head;

    int i = 0;

    // On cherche le maillon juste avant celui à supprimer
    while (current->next != nullptr &&
           current->next->next != nullptr &&
           i < pos - 1)
    {
        current = current->next;
        i++;
    }

    // current->next est le maillon à supprimer
    list *tmp = current->next;

    // Si la position demandée existe
    if (tmp != nullptr)
    {
        current->next = tmp->next;
        delete tmp;
    }
}


int ListP::size()
{
    int n = 0;

    list *current = head;

    while (current != nullptr)
    {
        n++;
        current = current->next;
    }

    return n;
}


void ListP::print()
{
    list *current = head;

    int i = 0;

    while (current != nullptr)
    {
        std::cout << "Point " << i << " : ";
        current->pt.print();

        current = current->next;
        i++;
    }
}
///////////////////////////////////////////////////////////////////////////////

//----------------TD2------+-------------------------------------------------
polygone::polygone(){
    
}
segment::segment(Point a, Point b){
    this->p1 = a;
    this->p2 = b;
}

triangle::triangle(Point a, Point b, Point c){
    pts.push_pos(1,a);
    pts.push_pos(2,b);
    pts.push_pos(3,c);
}

rectangle::rectangle(Point a, Point b, Point c, Point d){
    pts.push_pos(1,a);
    pts.push_pos(2,b);
    pts.push_pos(3,c);

}

carree::carree(Point a, Point b, Point c, Point d){
    this->p1 = a;
    this->p2 = b;
    this->p3 = c;
    this->p4 = d;
}

cercle::cercle(Point O_coord, double rayon_coord){
    this->O = O_coord;
    this->rayon = rayon_coord;
}