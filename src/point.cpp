#include "point.hpp"
#include <cmath>

// Constructor
Point::Point(double xVal, double yVal) : x(xVal), y(yVal) {}

// Getters
double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

// Distance operator
double Point::operator-(const Point& other) const {
    return std::sqrt(std::pow(other.x - x, 2) + std::pow(other.y - y, 2));
}

// Equality
bool Point::operator==(const Point& other) const {
    return x == other.x && y == other.y;
}

// Inequality
bool Point::operator!=(const Point& other) const {
    return !(*this == other);
}

// Midpoint
Point Point::operator/(const Point& other) const {
    return Point((x + other.x) / 2.0, (y + other.y) / 2.0);
}

// Output stream
std::ostream& operator<<(std::ostream& os, const Point& point) {
    os << "(" << point.x << ", " << point.y << ")";
    return os;
}