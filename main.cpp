#include <iostream>
#include <iomanip>   
#include "src/point.hpp"

using namespace std;


int main() {
    Point p1 = Point(3.2, 9.8);
    Point p2 = Point(5.5, -1.2);

    cout << fixed << setprecision(3);

    cout << p1 - p2 << endl;
    cout << (p1 == p2) << endl;
    cout << (p1 != p2) << endl;  
    cout << p1 / p2 << endl;

    return 0;
}