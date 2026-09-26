class Point{
    private:
        double x;
        double y;
    public:
        Point(double x,double y);
        void print();
        double distance(double x2, double y2);
        friend double Point::distance2(const Point& p1, const Point& p2);
        //double Point::distance3(const Point& p1, const Point& p2); //en utilisant distance
        Point center(Point p2);
    };


    class 