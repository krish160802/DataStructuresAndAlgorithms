#include<bits/stdc++.h>
using namespace std;

int mult(int n,int m){
	if(n==0){
		return 0;
	}
	
	int sml = m + mult(n-1,m);
	return sml;
}

int main(){
	int n,m;
	cin>>n;
	cin>>m;
	cout<<mult(n,m);
}
