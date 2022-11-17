#include <bits/stdc++.h>
using namespace std;

int loot(int arr[],int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return arr[0];
	}
	if(n==2){
		return max(arr[0],arr[1]);
	}
	
	int cur;
	int prev = max(arr[0],arr[1]);
	int dprev = arr[0];
	
	for(int i = 2;i<n;i++){
		cur = max(prev,arr[i] + dprev);
		dprev = prev;
		prev = cur;
	}
	return cur;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<loot(arr,n)<<endl;
}
