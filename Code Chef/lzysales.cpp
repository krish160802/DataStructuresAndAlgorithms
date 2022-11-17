#include<bits/stdc++.h>
using namespace std;

int lzy(int arr[],int n,int w){
	
	int curr = 0;
	int cnt = 0;
	
	if(arr[0]>w){
		
		return n-1;
	}
	
	for(int i=0;i<n;i++){
		
		if(curr<w){
			curr = curr+arr[i];
			cnt++;
		}
	}
	
	return (n-cnt);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,w;
		cin>>n;
		cin>>w;
		int arr[n];
		
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		
		sort(arr, arr + n, greater<int>());
		
		cout<<lzy(arr,n,w)<<endl;
	}
}
