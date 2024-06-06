#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,a = 0,s = 0;
    cin >> n;
    while(a <= n)
    {
    	s = s + a;
    	a = a + 1;
	}
    cout << s << endl;
    return 0;
}
