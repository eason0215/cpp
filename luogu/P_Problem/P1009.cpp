#include <bits/stdc++.h>
using namespace std;
int n;	
int lv[100],st[100],reg[100],tot[100];
int lvL,stL=1,regL=1,totL;
int exL=1;
 
int main(){
	st[0] = 1;
	cin >> n;	
	for(int i=1;i<=n;i++){
		lvL = 0;
		int mv = i;
 
		while(mv>0){	
			lv[lvL++] = mv%10;
			mv /= 10;
		}
 

		for(int j=0;j<lvL;j++){	
			for(int h=0;h<=stL;h++){	
				reg[h+j] += st[h]*lv[j];
			}
		}
 

		for(int i=0;i<regL;i++){
			if(reg[i]>9){
				reg[i+1] += reg[i]/10;
				reg[i] %= 10;
			}
		}
 
	
		if(reg[regL]){
			regL++;
		}
 

		totL = stL;	
		exL = max(exL,regL);
		for(int i=0;i<regL;i++){
			st[i] = reg[i];
		}
		stL = regL;
		regL = totL+lvL;

		memset(reg,0,sizeof(reg));	
 

		for(int i=0;i<exL;i++){
			tot[i] += st[i];
			if(tot[i]>9){
				tot[i+1] += tot[i]/10;
				tot[i]%=10;
			}
		}
	}
	while(tot[exL]==0 && exL>0) exL--;
	for(int i=exL;i>=0;i--){
		cout << tot[i];
	}
	return 0;
}
