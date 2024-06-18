#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double radius;
    const double pi = 3.1415926;

    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    double area = pi * pow(radius, 2);

    double perimeter = 2 * pi * radius;

    std::cout << std::fixed << std::setprecision(2) << area << std::endl;
    std::cout << std::fixed << std::setprecision(2) << perimeter << std::endl;

    return 0;
}
