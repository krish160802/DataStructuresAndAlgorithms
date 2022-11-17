#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		cin>>a;
		int x = sqrt(n);
		int ans = ceil(x);
		cout<<ans*a<<endl;
	}
}
