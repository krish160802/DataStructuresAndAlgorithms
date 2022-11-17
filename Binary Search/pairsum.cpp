#include<bits/stdc++.h>
using namespace std;
int psum(int arr[],int n,int x){
	int l=0;
	int r=n-1;
	int count = 0;
	while(l<=r){
		if(arr[l] + arr[r]<x){
			l++;
		}
		else if(arr[l]+arr[r]>x){
			r--;
		}
		else{
			count++;
			r--;
		}
	}
	return count; 
}
int main(){
	int arr[] ={1,2,1,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	sort(arr, arr + n);
	int x;
	cin>>x;
	cout<<psum(arr,n,x)<<endl;
}
