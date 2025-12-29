#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a,b,c,x1,x2;
    cin >> a >> b >> c;
    double d = b * b - 4 * a * c;
    if(d < 0) cout << "No answer!";
    else if(d == 0){
        x1 = -b / (2 * a);
        printf("x1=x2=%.5f", x1);
    }
    else{
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        if(x1 > x2) swap(x1, x2);
        printf("x1=%.5f;x2=%.5f", x1, x2);
    }
}