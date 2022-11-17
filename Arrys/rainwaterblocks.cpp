#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
	
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
	
		int sum = 0;
		int l=0;
		int r=n-1;
		int bestl=0,bestr=0;
		
		while(l<=r){
			if(arr[l]<arr[r]){
				if(arr[l]>bestl){
					bestl = arr[l];
				}
				else{
					sum = sum + (bestl-arr[l]);
				}
				l++;
			}
			else{
				if(arr[r]>bestr){
					bestr = arr[r];
				}
				else{
					sum = sum + (bestr-arr[r]);
				}
				r--;
			}
		}
	
		cout<<sum<<endl;
	}
	
	
	
}
