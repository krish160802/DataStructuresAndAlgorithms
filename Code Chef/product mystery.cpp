#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
	if(a<b){
		return gcd(b,a);
	}
	if(b==0){
		return a;
	}
	return gcd(b,a%b);
}

int lcm(int a,int b){
	return (a/gcd(a,b))*b;
}

int prdmys(int a,int b){
	return (lcm(a,b)/a);
}

int main(){
	int a,b;
	cin>>a>>b;
	cout<<prdmys(a,b)<<endl;
}
