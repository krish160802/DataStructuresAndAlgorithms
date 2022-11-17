#include<iostream>
#include<vector>
using namespace std;

int alphacode(int arr[],int n,vector<int>&v){
	if(n == 1 || n == 0){
		return 1;
	}
	if(v[n]>0){
		return v[n];
	}
	int outp = alphacode(arr,n-1,v);
	if(arr[n-2] * 10 + arr[n-1] <= 26){
		outp += alphacode(arr,n-2,v);
	}
	v[n] = outp;
	return outp;
}

int main(){
	int n = 4;
	int arr[] = {4,1,2,3};
	vector<int>v(n+1,0);
	cout<<alphacode(arr,n,v)<<endl;
}
