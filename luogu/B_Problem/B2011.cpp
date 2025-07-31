#include<iostream>
#include <iomanip>

using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	cout<<setiosflags(ios::fixed)<<setprecision(9);
	cout<<(double)a/b;
	return 0;
}
