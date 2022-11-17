#include <bits/stdc++.h>
using namespace std;

int minchoc(int arr[],int n){
	int out[n];
	out[0] = 1;
	int sum = 0;
	
	for(int i = 1;i<n;i++){
		if(arr[i]>arr[i-1]){
			out[i] = out[i-1]+1;
		}
		else{
			out[i] = 1;
		}
	}
	
	for(int i = n-2;i>=0;i--){
		if(arr[i]>arr[i+1] && out[i]<=out[i+1]){
			out[i] = out[i+1]+1;
		}
	}
	
	for(int i = 0;i<n;i++){
		sum = sum+out[i];
	}
	return sum;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<minchoc(arr,n)<<endl;
}
