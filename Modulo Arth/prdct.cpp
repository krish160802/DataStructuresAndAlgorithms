#include<bits/stdc++.h>
using namespace std;

int product(int n){
	int m = pow(10,9) + 7;
	int ans = 1;
	for(int i = 1; i<=n; i++){
		ans = (ans*i)%m;
	}
	return ans;
}

int main(){
	int t;
	cin>>t;
	while t--{
		int n;
		cin>>n;
		product(n);
		cout<<product(n)<<endl;
	}
}
