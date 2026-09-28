class Point {
private:
    double x{}, y{};

public:
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