#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int firstDayGold;
    cin >> firstDayGold;
    int secondDayGold = firstDayGold / 100;
    int thirdDayGold = firstDayGold % 100;
    double averageGold = (firstDayGold + secondDayGold + thirdDayGold) / 3.0;
    cout << fixed << setprecision(2);
    cout << averageGold << endl;

    return 0;
}

