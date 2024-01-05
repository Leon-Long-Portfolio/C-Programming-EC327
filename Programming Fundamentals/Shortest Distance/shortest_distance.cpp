#include <iostream>
#include <cmath>

using namespace std;

// Coordinate struct
struct Point {
    double x, y;
};

// Finds length of line
double calculateDistance(const Point& a, const Point& b) {
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

// Finds shortest distance to line
double shortestDistanceToLine(const Point& lineStart, const Point& lineEnd, const Point& point) {
    double normalLength = calculateDistance(lineStart, lineEnd);
    return fabs((point.x - lineStart.x) * (lineEnd.y - lineStart.y) - (point.y - lineStart.y) * (lineEnd.x - lineStart.x)) / normalLength;
}

int main() {

    Point p1, p2, p3;

    //User prompt
    cout << "Enter three x,y coordinates:" << endl;
    cin >> p1.x >> p1.y >> p2.x >> p2.y >> p3.x >> p3.y;

    // Calls functions
    double distance = shortestDistanceToLine(p1, p2, p3);

    cout << "The shortest distance for (" << p3.x << "," << p3.y << ") to the line composed of (" 
              << p1.x << "," << p1.y << ") and (" << p2.x << "," << p2.y << ") is " << distance << "." << endl;

    return 0;
}
