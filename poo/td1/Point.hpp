class Point{
    private:
        double x{}, y{};
    public:
        Point(double a, double b);
        //creerP
        void print(Point p);
        double distance(double x1, double y1, double x2, double y2) const;
        double center(double x1, double y1, double x2, double y2) const;

};

