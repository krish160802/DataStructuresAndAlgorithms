#include<bits/stdc++.h>
using namespace std;

int peakele(int arr[],int l,int h,int n){
	
	int mid=(l+h)/2;
	
	if(n==0){
		return -1;
	}
	
	if((mid==0 || arr[mid]>=arr[mid-1]) && (mid==n-1 || arr[mid]>=arr[mid+1])){
		return arr[mid];
	}
	
	if(mid-1>=0 && arr[mid-1]>arr[mid]){
		return peakele(arr,l,mid-1,n);
	}
	
	return peakele(arr,mid+1,h,n);
}
int main(){
	int n;
	cout<<"LENGTH OF ARRAY : ";
	cin>>n;
	int arr[n];
	cout<<"ELEMENTS OF ARRAY : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"THE REQ PEAK ELEMENT IS : "<<peakele(arr,0,n-1,n)<<endl;
}
