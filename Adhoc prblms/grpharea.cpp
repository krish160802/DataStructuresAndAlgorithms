#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int* hite = new int[5000000 + 2]();
	int bound = 0;
	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		if(hite[x/2]<y){
			hite[x/2] = y;
		}
		if((x/2)>bound){
			bound = x/2;
		}
	}
	
	int area = 0;
	for(int i = bound;i>0;i--){
		if(hite[i]<hite[i+1]){
			hite[i] = hite[i+1];
		}
		area = area+hite[i];
	}
	cout<<2*area<<endl;
	return 0;
}
