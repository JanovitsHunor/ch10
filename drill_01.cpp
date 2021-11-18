#include "std_lib_facilities.h"

class Point {
public:
    Point(double x, double y);
    double x() const { return m_x; }
    double y() const { return m_y; }
private:
    double m_x;
    double m_y;
};

Point::Point(double x, double y)
: m_x{x}, m_y{y} {  };

int main()
try{
    Point p{3.14, 2.69};

    cout << '(' << p.x() << ", " << p.y() << ')' << '\n';
    
    return 0;
}
catch(exception& e)
{
    cerr << e.what() << '\n';
    return 1;
}
catch(...)
{
    cerr << "Unknown exception!!\n";
    return 2;
}