#include<bits/stdc++.h>
using namespace std;

int fact(int n){
	if(n==0){
		return 1;
	}
	
	int sm = fact(n-1);
	return n*sm;
}

int main(){
	int n;
	cin>>n;
	cout<<fact(n);
}
