#include<bits/stdc++.h>
using namespace std;

int doeq(int x,int y){
	if(x==y){
		return 0;
	}
	if(x<y){
		return doeq(x+1,y) + 1;
	}
	if(y<x){
		if(x-y>=2){
			return doeq(x,y+2) + 1;
		}
		else if(x-y==1){
			return doeq(x+1,y+2) + 2;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y;
		cin>>x;
		cin>>y;
		cout<<doeq(x,y);
	}
}
