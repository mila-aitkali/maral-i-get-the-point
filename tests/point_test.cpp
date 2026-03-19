#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/point.hpp"
using namespace std;

int main() {
    Point p1(3.0, 4.0);
    Point p2(6.0, 8.0);
    Point p3(3.0, 4.0);

    // Test distance
    double dist = p1 - p2;
    cout << "Distance test: " << dist << endl;
    assert(dist > 4.99 && dist < 5.01); // approx 5

    // Test equality
    cout << "Equality test: " << (p1 == p3) << endl;
    assert(p1 == p3);

    // Test inequality
    cout << "Inequality test: " << (p1 != p2) << endl;
    assert(p1 != p2);

    // Test midpoint
    Point mid = p1 / p2;
    cout << "Midpoint test: " << mid << endl;
    assert(mid.getX() == 4.5 && mid.getY() == 6.0);

    // Test output formatting
    cout << "Print test: " << p1 << endl;

    cout << "All tests passed ✅" << endl;

    return 0;
}
