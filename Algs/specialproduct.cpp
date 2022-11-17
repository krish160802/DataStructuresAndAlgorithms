#include<bits/stdc++.h>
#include<climits>
using namespace std;

void product(int arr[],int n){
	int prod[n];
	int left = 1;
	for(int i=0;i<n;i++){
		prod[i] = left;
		left = left*arr[i];
	}
	int right = 1;
	for(int i=n-1;i>=0;i--){
		prod[i] = prod[i]*right;
		right = right*arr[i];
	}
	for(int i=0;i<n;i++){
		cout<<prod[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int n;
	cin>>n;
	int arr[] = {10,3,5,6,2};
	product(arr,n);
}
