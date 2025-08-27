#include<iostream>
using namespace std;

double pi=3.14159;

double d(double r){
	double pi=3.14159;
	return (2.0*r);
}

double c(double r){
	double pi=3.14159;
	return (2.0*pi*r);
}

double s(double r){
	double pi=3.14159;
	return (pi*r*r);
}

int main(){
	double pi=3.14159;
	int r;
	cin>>r;
	printf("%.4lf %.4lf %.4lf",d(r),c(r),s(r));
	return 0;
}
