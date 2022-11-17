#include<bits/stdc++.h>
using namespace std;

bool srtd(int arr[],int n){
	if(n==1 || n==0){
		return true;
	}
	if(arr[0]>arr[1]){
		return false;
	}
	bool lsrtd = srtd(arr+1,n-1);
	return lsrtd;
}
int main(){
	int arr[] = {4,5,7,10,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<srtd(arr,n);
}
