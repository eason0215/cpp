#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool isPalindrome(int n) {
    int temp = n, reverse = 0;
    while (temp > 0) {
        reverse = reverse * 10 + temp % 10;
        temp /= 10;
    }
    return (reverse == n);
}

int main() {
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (isPalindrome(i) && isPrime(i)) {
            cout << i << endl;
        }
    }
    cout << endl;

    return 0;
}