// ----------------------- RESSOURCES TD1------------------------
// remplacé par IA à revoir  
class Point {
private:
    double x{}, y{};

public:
    Point() = default; // VOIR AVEC IA A QUOI CA SERT (constructeur par défaut ?)
    Point(double x, double y);
    void print() const;
    double distance(Point a, Point b) const;
    Point center(Point a, Point b) const;
};


class ListP {
private:

    struct list {
        Point pt;
        struct list *next;
    };

    list *head;

public:
    ListP();

    bool isempty();
    void push_pos(int pos, Point p);
    void delete_pos(int pos);
    int size();
    void print();
};


// ------------------------------------------------------------------

//------------------TD2----------------------------------------------
class GeoObj{
    private:

    public:
        virtual void translate(double a, double b) = 0; //verifier pourquoi =0
        virtual void rotate(double theta, Point centre) = 0;
        virtual void dilatation(Point centre, double k) = 0;
};

class segment : public GeoObj{
    private:
       Point p1;
       Point p2; 
    public:
        segment(Point p1, Point p2);


};

class polygone : public GeoObj{
    private:
        ListP pts;
    public:
        void translate(double a, double b) override;
        void rotate(double theta, Point centre) override;
        void dilatation(Point centre, double k) override;
        polygone();
};


class triangle : public polygone{
    private:
        //Point p1, p2, p3; FAUX SI ON UTILISE UNE LISTE DE POINTS DE POLYGONE
    public:
        triangle(Point p1, Point p2, Point p3);
};

class rectangle : public polygone{
    private:
        //Point p1, p2, p3, p4; FAUX SI ON UTILISE UNE LISTE DE POINTS DE POLYGONE
    public:
        rectangle(Point p1, Point p2, Point p3, Point p4);
};

class carree : public polygone{
    private:
        //Point p1, p2, p3, p4;FAUX SI ON UTILISE UNE LISTE DE POINTS DE POLYGONE
    public:
        carree(Point p1, Point p2, Point p3, Point p4);
};

class cercle : public GeoObj{
    private:
        Point O;
        double rayon;
    public:
        cercle(Point O, double rayon);
};