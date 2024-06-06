#include <iostream>
using namespace std;

int factorial(int n)
{
	int a;
	int sum = 1;
	while(a <= n)
	{
		sum = sum * a;
		a++;
	}
	return sum;
}

int main() {
	int a,b;
	cin >> a;
	b = factorial(a);
	cout << b;
	return 0;
}
