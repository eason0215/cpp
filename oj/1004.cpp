#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,a = 1,s = 1;
    cin >> n;
    while(a <= n)
    {
    	s = s * a;
    	a = a + 1;
	}
    cout << s << endl;
    return 0;
}
