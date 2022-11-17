#include<bits/stdc++.h>
using namespace std;

bool prm(int num){
	for(int i=2;i<=sqrt(num);i++){
		if(num%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a;
		cin>>b;
		int sm=a+b;
		for(int i=sm+1; ;i++){
			if(prm(i)){
				cout<<i-sm<<endl;
				break;
			}
		}
	}
}
