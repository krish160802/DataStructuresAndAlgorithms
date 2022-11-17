#include<bits/stdc++.h>
using namespace std;

int f(int arr[],int n,int x){
	int l=0;
	int r=n-1;
	int ans = -1;
	while(l<=r){
		int mid = l+(r-l)/2;
		if(arr[mid] == x){
			ans = mid;
			r = mid-1;
		}
		else if(x<arr[mid]){
			r = mid-1;
		}
		else{
			l=mid+1;
		}
		
//		mid = l+(r-l)/2;
	}
	return ans; 
}

int l(int arr[],int n,int x){
	int l1=0;
	int r1=n-1;
	int ans1 = -1;
	while(l1<=r1){
		int mid = l1+(r1-l1)/2;
		if(arr[mid] == x){
			ans1 = mid;
			l1 = mid+1;
		}
		else if(x<arr[mid]){
			r1 = mid-1;
		}
		else{
			l1=mid+1;
		}
		
//		mid = l+(r-l)/2;
	}
	return ans1; 
}
int main(){
	int arr[] = {1,3,5,5,5,5,67,123,125};
	int n = sizeof(arr)/sizeof(arr[0]);
	int x;
	cin>>x;
	cout<<f(arr,n,x)<<endl;
	cout<<l(arr,n,x)<<endl; 
}
