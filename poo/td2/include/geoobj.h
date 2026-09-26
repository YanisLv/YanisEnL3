
// ----------------------- RESSOURCES TD1------------------------
class Point{
    private:
        double x{},y{};
    public:
        Point(double x, double y);
        void print()const;
        double distance(Point a, Point b) const;
        Point center(Point a, Point b) const;
};

class ListP{
    private:
        struct list{
            Point pt;
            struct list* next;
        }; list *head; // voir à quoi la sert la tête
    public:
        bool isempty();
        void push_pos(int pos, Point p, struct list **L);
        void delete_pos(int pos);
        int size();
        void print();
};



// ------------------------------------------------------------------

//------------------TD2-------------------------
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
        


};

class polygone : public GeoObj{
    private:
        ListP pts;
    public:
        void translate() override;
        void rotate() override;
        void dilatation() override;

};


class triangle : public polygone{
    private:
        Point p1, p2, p3;
    public:
};

class rectangle : public polygone{
    private:
        Point p1, p2, p3, p4;
    public:
};

class carree : public polygone{
    private:
        Point p1, p2, p3, p4;
    public:
};

class cercle : public GeoObj{
    private:
        Point O;
        double rayon;
    public:
};