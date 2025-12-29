#include<iostream>
using namespace std;

double a(double a){
	return (-1*a+2.5);
}

double b(double a){
	return (2-1.5*(a-3)*(a-3));
}

double c(double a){
	return (a/2.0-1.5);
}


int main(){
	double m,ans;
	cin>>m;
	if(0<=m&&m<5){
		ans=a(m);
	}
	
	if(5<=m&&m<10){
		ans=b(m);
	}
	
	if(10<=m&&m<20){
		ans=c(m);
	}
	printf("%.3f",ans);
	return 0;
}


