#include <iostream>

using namespace std;

class Point {
private:
    double x;
    double y;

public:
    Point() : x(0), y(0) {}

    friend istream& operator>>(istream& in, Point& point) {
        in >> point.x >> point.y;
        return in;
    }

    friend ostream& operator<<(ostream& out, Point& point) {
        out << "(" << point.x << ", " << point.y << ")";
        return out;
    }
};

int main() {
    Point firstPoint, secondPoint;

    cout << "Enter x and y coordinates for first point, separated by a space: ";
    cin >> firstPoint;

    cout << "Enter x and y coordinates for second point, separated by a space: ";
    cin >> secondPoint;

    cout << "First point is at " << firstPoint << endl;
    cout << "Second point is at " << secondPoint << endl;

    return 0;
}
