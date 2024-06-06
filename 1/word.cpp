#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    cin.ignore();

    string line, word;
    getline(cin, line);

    int wordIndex = 0;
    while (wordIndex < N) {
        int count = 0;
        while (count + line.length() < K && wordIndex < N) {
            word = line.substr(count, line.find(' ', count) - count);
            if (count + word.length() <= K) {
                cout << word << " ";
                count += word.length() + 1;
                wordIndex++;
            } else {
                break;
            }
        }
        cout << endl;
        line = line.substr(count);
    }

    return 0;
}

