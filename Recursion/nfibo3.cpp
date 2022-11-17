#include<iostream>
#include<vector>
using namespace std;
int fibn(int n, vector<int>v){
	if(n==0 || n==1){
		return 1;
	}
	if(v[n]>0){
		return v[n];
	}
	int outp = fibn(n-1,v) + fibn(n-2,v);
	v[n] = outp;
	return outp;
	
}
int main(){
	int n;
	cin>>n;
	vector<int>v(n+1,0);
	cout<<fibn(n,v)<<endl;
} 
