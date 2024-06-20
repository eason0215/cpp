#include <iostream>

int main() {
    int x;
    std::cin >> x;

    int front = x / 100;
    int back = x % 100;
    int y = back * 100 + front;

    std::cout << y << std::endl;

    return 0;
}
