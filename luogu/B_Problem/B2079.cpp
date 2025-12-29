#include <bits/stdc++.h>
using namespace std;
int main(){
    double n, e = 1.0,q = 1.0;
    cin >> n;
    for (int i = 1;i <= n;i++){
		q *= i;
		e += 1 / q;
	}
    printf("%.10lf",e);
    return 0;
}
