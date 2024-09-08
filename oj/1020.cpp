#include <iostream>
using namespace std;
int main()  
{
    char a[3];
    int b;
    cin >> a;
    b = ((a[0] - '0') * 100 + (a[1] - '0') * 10 + (a[2] - '0'))+((a[0] - '0')+(a[1] - '0')*10+(a[2] - '0')*100);
    cout << b << endl;
    return 0;
}