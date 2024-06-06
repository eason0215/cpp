#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int m;
    cin >> m;

    int n = 0;
    for (int a = 0; a * a * a * a <= m; a++) {
        for (int b = 0; a * a * a * a + b * b * b * b <= m; b++) {
            for (int c = 0; a * a * a * a + b * b * b * b + c * c * c * c <= m; c++) {
                int d = sqrt(m - (a * a * a * a + b * b * b * b + c * c * c * c));
                if (a * a * a * a + b * b * b * b + c * c * c * c + d * d * d * d == m) {
                    n = max(n, 4 - (a == 0 ? 0 : 1) - (b == 0 ? 0 : 1) - (c == 0 ? 0 : 1) - (d == 0 ? 0 : 1));
                }
            }
        }
    }

    cout << n << endl;

    return 0;
}

