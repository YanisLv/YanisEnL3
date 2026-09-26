//#ifndef POINT_H
//#define POINT_H
class Point{
    private:
        double x{}, y{};
    public:
        Point(double x, double y);
        //creerP
        void print() const;
        double distance(Point ap) const;
        double center(double x1, double y1, double x2, double y2) const;
        
};

#endif // POINT_H