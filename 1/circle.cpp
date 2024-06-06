#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double radius;
    const double pi = 3.1415926;

    // 读取输入的半径
    std::cin >> radius;

    // 计算面积
    double area = pi * pow(radius, 2);

    // 计算周长
    double perimeter = 2 * pi * radius;

    // 输出面积和周长，保留两位小数
    std::cout << std::fixed << std::setprecision(2) << area << std::endl;
    std::cout << std::fixed << std::setprecision(2) << perimeter << std::endl;

    return 0;
}
