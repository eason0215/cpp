#include <iostream>
#include <string>

using namespace std;

int main()  
{
    string a;
    cin >> a;
    
    // 遍历字符串，进行替换
    for (int i = 0; i < a.length(); ++i) {
        switch (a[i]) {
            case 'O': a[i] = '0'; break;
            case 'l': a[i] = '1'; break;
            case 'Z': a[i] = '2'; break;
            case 'S': a[i] = '5'; break;
            case 'b': a[i] = '6'; break;
            case 'B': a[i] = '8'; break;
            case 'q': a[i] = '9'; break;
        }
    }
    
    // 输出改正后的字符串
    cout << a << endl;
    
    return 0;
}
