#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>

class Point {
private:
    double x;
    double y;

public:
    // Constructor
    Point(double xVal = 0.0, double yVal = 0.0);

    // Getters
    double getX() const;
    double getY() const;

    // Operator overloads
    double operator-(const Point& other) const;   // distance
    bool operator==(const Point& other) const;    // equality
    bool operator!=(const Point& other) const;    // inequality
    Point operator/(const Point& other) const;    // midpoint

    // Output streaming
    friend std::ostream& operator<<(std::ostream& os, const Point& point);
};

#endif