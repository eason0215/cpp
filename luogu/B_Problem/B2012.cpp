#include<iostream>
#include <iomanip>

using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	cout<<setiosflags(ios::fixed)<<setprecision(3);
	cout<<(((double)b)/a)*100<<"%";
	return 0;
}
