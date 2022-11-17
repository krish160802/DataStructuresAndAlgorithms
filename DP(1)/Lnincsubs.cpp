#include<iostream>
using namespace std;
int lngsub(int* arr, int n){
	int *outp = new int [n];
	outp[0] = 1;
	for(int i = 1;i<n;i++){
		outp[i] = 1;
		for(int j = i-1;j>=0;j--){
			if(arr[j]>arr[i]){
				continue;
			}
			int ans = outp[j] + 1;
			if(ans>outp[i]){
				outp[i] = ans;
			}
		}
	}
	int bst = 0;
	for(int i = 0;i<n;i++){
		if(bst<outp[i]){
			bst = outp[i];
		}
	}
	delete [] outp;
	return bst;
	
}
int main(){
	int n;
	cin>>n;
	int* arr = new int [n];
	for(int i = 0;i<n; i++){
		cin>>arr[i];
	}
	cout<<lngsub(arr,n);
}
