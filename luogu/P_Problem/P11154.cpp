#include<iostream>
using namespace std;
int main(){
	
	double max,pure,far,lost,maxscore=10000000,purescore,farscore,lostscore,finalscore;
	cin>>max>>pure>>far>>lost;
	
	purescore=maxscore/(max+pure+far+lost);
	farscore=0.5*purescore;
	lostscore=0;
	finalscore=((max+pure)*purescore+far*farscore)+max;
	
	if(finalscore>=9900000){
		cout<<"EX+";
	}
	if(finalscore>=9800000 && finalscore<9900000){
		cout<<"EX";
	}
	if(finalscore>=9500000 && finalscore<9800000){
		cout<<"AA";
	}
	if(finalscore>=9200000 && finalscore<9500000){
		cout<<"A";
	}
	if(finalscore>=8900000 && finalscore<9200000){
		cout<<"B";
	}
	if(finalscore>=8600000 && finalscore<8900000){
		cout<<"C";
	}
	if(finalscore<8600000){
		cout<<"D";
	}
	
	return 0;
}
