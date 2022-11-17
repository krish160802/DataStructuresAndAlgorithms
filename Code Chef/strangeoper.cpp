#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n;
		cin>>k;
		int el;
		int sum = 0;
		for(int i=1;i<=n;i++){
			cin>>el;
			sum = sum+el;
		}
		int res = sum;
	
		int val;
		for(int i=0;i<k;i++){
			val = res + 1;
			res  = res+val;
		}
		if(val%2==0){
			cout<<"even"<<endl;
		}
		else{
			cout<<"odd"<<endl;
		}
	
	}
	
}
