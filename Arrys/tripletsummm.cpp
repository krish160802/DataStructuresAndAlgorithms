#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,target;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>target;
	
	sort(arr,arr+n);
	
	for(int i=0;i<n;i++){
		int l=i+1;
		int r=n-1;
		while(l<r){
			if(arr[i]+arr[l]+arr[r]==target){
				
				cout<<arr[i]<<", "<<arr[l]<<" and "<<arr[r]<<endl;
				cout<<endl; 
				l++;
				r--;
			}
			else if(arr[i]+arr[l]+arr[r]>target){
				r--;
			}
			else{
				l++;
			}
		}
	}
}
