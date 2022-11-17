#include<bits/stdc++.h>
using namespace std;


int main() {
	int n;
	cin>>n;
	int arr[n];
	int nw[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++){
		int a = i;
		int b = arr[i];
		nw[b] = a;
	}
	for(int i=0;i<n;i++){
		cout<<nw[i]<<" ";
	}
	
	
	return 0;
}
